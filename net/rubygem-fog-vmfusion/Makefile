PORTNAME=	fog-vmfusion
PORTVERSION=	0.1.0
CATEGORIES=	net rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Module for the 'fog' gem to support VMware Fusion

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.md

RUN_DEPENDS=	rubygem-fission>=0:emulators/rubygem-fission \
		rubygem-fog-core>=0:devel/rubygem-fog-core

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

.include <bsd.port.mk>
