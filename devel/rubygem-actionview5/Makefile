PORTNAME=	actionview
PORTVERSION=	5.1.7
CATEGORIES=	devel rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	5

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Rendering framework putting the V in MVC (part of Rails)

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

RUN_DEPENDS=	rubygem-activesupport5>=${PORTVERSION}:devel/rubygem-activesupport5 \
		rubygem-builder>=3.1<4:devel/rubygem-builder \
		rubygem-erubi>=1.4<2:www/rubygem-erubi \
		rubygem-rails-dom-testing-rails5>=2.0<3:textproc/rubygem-rails-dom-testing-rails5 \
		rubygem-rails-html-sanitizer>=1.0.3<2:textproc/rubygem-rails-html-sanitizer

USES=		cpe gem
USE_RUBY=	yes

NO_ARCH=	yes

CPE_VENDOR=	rubyonrails

PORTSCOUT=	limit:^5\.1\.

.include <bsd.port.mk>
