PORTNAME=	dcl
PORTVERSION=	5.4.8
PORTREVISION=	9
CATEGORIES=	science graphics
MASTER_SITES=	http://www.gfd-dennou.org/library/dcl/ \
		http://dennou-h.gfd-dennou.org/library/dcl/ \
		http://dennou-q.gfd-dennou.org/library/dcl/

MAINTAINER=	murashin@gfd-dennou.org
COMMENT=	Scientific graphic library for geoscience

# Converted from RESTRICTED
LICENSE=	dcl
LICENSE_NAME=	dcl
LICENSE_TEXT=	No commercial use
LICENSE_PERMS=	auto-accept

BROKEN=		fails to fetch from mastersite (newest release is 7.4.0 of 2020611)

MAKE_JOBS_UNSAFE=	yes
USES=		desthack fortran gnome pkgconfig xorg
USE_XORG=	x11 xext
USE_GNOME=	gtk20 gdkpixbuf2
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-x

PORTDOCS=	CHECK CREDITS HISTORY README
PORTEXAMPLES=	*

OPTIONS_DEFINE=	DOCS EXAMPLES

.include <bsd.port.options.mk>

.if ${FORTRAN_DEFAULT} == gfortran && ${GCC_DEFAULT} >= 10
FFLAGS+=	-fallow-invalid-boz
.endif

post-install:
	@${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	(cd ${WRKSRC}/demo/ && ${COPYTREE_SHARE} . ${STAGEDIR}${EXAMPLESDIR})
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
.for i in ${PORTDOCS}
	${INSTALL_DATA} ${WRKSRC}/${i} ${STAGEDIR}${DOCSDIR}/
.endfor

.include <bsd.port.mk>
