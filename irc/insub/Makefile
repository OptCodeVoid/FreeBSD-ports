PORTNAME=	insub
PORTVERSION=	16.0
PORTREVISION=	1
CATEGORIES=	irc

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Some scripts for expressing how you feel on IRC and the web

RUN_DEPENDS=	cowsay:games/cowsay \
		figlet:misc/figlet

USE_GITHUB=	yes
GH_ACCOUNT=	cjones

USES=		perl5 python shebangfix
SHEBANG_FILES=	insub.py
USE_PERL5=	run
NO_BUILD=	yes
NO_ARCH=	yes

DATADIR=	${PREFIX}/share/cows

OPTIONS_DEFINE=	COWS
OPTIONS_DEFAULT=COWS
OPTIONS_SUB=	yes

COWS_DESC=	Install a collection of cowsay(1) cows

post-patch:
	@${REINPLACE_CMD} -e 's,/usr/local,${PREFIX},g' \
		${WRKSRC}/${PORTNAME}.py ${WRKSRC}/irssi/${PORTNAME}.pl

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/${PORTNAME}.py ${STAGEDIR}${PREFIX}/bin/${PORTNAME}
	@${MKDIR} ${STAGEDIR}${PREFIX}/share/irssi/scripts
	${INSTALL_DATA} ${WRKSRC}/irssi/${PORTNAME}.pl \
		${STAGEDIR}${PREFIX}/share/irssi/scripts
	@${MKDIR} ${STAGEDIR}${DATADIR}
	(cd ${WRKSRC}/old/cows-extra && ${COPYTREE_SHARE} . ${STAGEDIR}${DATADIR})

.include <bsd.port.mk>
