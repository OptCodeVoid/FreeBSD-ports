PORTNAME=	mod_auth_pubtkt
PORTVERSION=	0.13
CATEGORIES=	www
MASTER_SITES=	https://neon1.net/mod_auth_pubtkt/
PKGNAMEPREFIX=	${APACHE_PKGNAMEPREFIX}
DIST_SUBDIR=	apache2

MAINTAINER=	mk@neon1.net
COMMENT=	Apache module to provide public key ticket based authentication

USES=		apache:2.2+
AP_FAST_BUILD=	yes
AP_GENPLIST=	yes
SRC_FILE=	src/mod_auth_pubtkt.c

.include <bsd.port.pre.mk>

.if ${APACHE_VERSION} > 2.2
AP_EXTRAS=	-DAPACHE24
.else
AP_EXTRAS=	-DAPACHE22
.endif

.include <bsd.port.post.mk>
