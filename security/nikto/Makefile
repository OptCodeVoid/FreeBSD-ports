PORTNAME=	nikto
PORTVERSION=	2.1.6
PORTEPOCH=	1
CATEGORIES=	security www

MAINTAINER=	mbeis@xs4all.nl
COMMENT=	Web and CGI vulnerability scanner with SSL support

LICENSE=	GPLv2

USES=		cpe perl5 shebangfix
CPE_VENDOR=	cirt.net
USE_PERL5=	run

GH_ACCOUNT=	sullo
USE_GITHUB=	yes

OPTIONS_DEFINE=	SSLEAY DOCS
OPTIONS_DEFAULT=SSLEAY
SSLEAY_DESC=	Use NET::SSLeay for ssl scanning
SSLEAY_RUN_DEPENDS=	p5-Net-SSLeay>0:security/p5-Net-SSLeay

NO_BUILD=	yes
NO_ARCH=	yes

SHEBANG_FILES=	nikto.pl
WRKSRC_SUBDIR=	program

post-patch:	.SILENT
	${REINPLACE_CMD} -e \
		's|/etc/nikto.conf|${PREFIX}/etc/nikto.conf|' ${WRKSRC}/nikto.pl
	${REINPLACE_CMD} -Ee \
		's|# (EXECDIR=).*/nikto|\1${DATADIR}| ; \
		 s|# (DBDIR=).*/databases|\1${DATADIR}/databases| ; \
		 s|# (PLUGINDIR=).*/plugins|\1${DATADIR}/plugins| ; \
		 s|# (TEMPLATEDIR=).*/templates|\1${DATADIR}/templates| ; \
		 s|# (DOCDIR=).*/docs|\1${DOCSDIR}|' ${WRKSRC}/nikto.conf

do-install:	.SILENT
	${INSTALL_SCRIPT} ${WRKSRC}/nikto.pl ${STAGEDIR}${PREFIX}/bin/nikto
	${INSTALL_MAN} ${WRKSRC}/docs/nikto.1 ${STAGEDIR}${PREFIX}/man/man1/nikto.1
	${INSTALL_DATA} ${WRKSRC}/nikto.conf ${STAGEDIR}${PREFIX}/etc/nikto.conf.sample
	${MKDIR} ${STAGEDIR}${DATADIR}
	${INSTALL_DATA} ${WRKSRC}/replay.pl ${STAGEDIR}${DATADIR}
.for i in databases plugins templates
	cd ${WRKSRC}; ${COPYTREE_SHARE} ${i} ${STAGEDIR}${DATADIR}
.endfor
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	cd ${WRKSRC}/docs; ${INSTALL_DATA} CHANGES.txt LICENSE.txt nikto.dtd \
		nikto_manual.html ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
