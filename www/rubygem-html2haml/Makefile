PORTNAME=	html2haml
PORTVERSION=	2.2.0
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Converts HTML into Haml

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

RUN_DEPENDS=	rubygem-erubis>=2.7.0<2.8:www/rubygem-erubis \
		rubygem-haml>=4.0<6:www/rubygem-haml \
		rubygem-nokogiri>=1.6.0:textproc/rubygem-nokogiri \
		rubygem-ruby_parser>=3.5<4:devel/rubygem-ruby_parser

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

PLIST_FILES=	bin/html2haml

.include <bsd.port.mk>
