PORTNAME=	Task-Catalyst
PORTVERSION=	4.02
PORTREVISION=	2
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	All you need to start with Catalyst

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Catalyst-ActionRole-ACL>=0:www/p5-Catalyst-ActionRole-ACL \
		p5-Catalyst-Action-REST>=0:www/p5-Catalyst-Action-REST \
		p5-Catalyst-Authentication-Credential-HTTP>=0:www/p5-Catalyst-Authentication-Credential-HTTP \
		p5-Catalyst-Authentication-Store-DBIx-Class>=0.106:www/p5-Catalyst-Authentication-Store-DBIx-Class \
		p5-Catalyst-Component-InstancePerContext>=0:www/p5-Catalyst-Component-InstancePerContext \
		p5-Catalyst-Controller-ActionRole>=0:www/p5-Catalyst-Controller-ActionRole \
		p5-Catalyst-Devel>=1.26:www/p5-Catalyst-Devel \
		p5-Catalyst-Manual>=5.80:www/p5-Catalyst-Manual \
		p5-Catalyst-Model-Adaptor>=0:www/p5-Catalyst-Model-Adaptor \
		p5-Catalyst-Model-DBIC-Schema>=0.08:www/p5-Catalyst-Model-DBIC-Schema \
		p5-Catalyst-Plugin-Authentication>=0.05:www/p5-Catalyst-Plugin-Authentication \
		p5-Catalyst-Plugin-I18N>=0.05:www/p5-Catalyst-Plugin-I18N \
		p5-Catalyst-Plugin-Session-State-Cookie>=0.02:www/p5-Catalyst-Plugin-Session-State-Cookie \
		p5-Catalyst-Plugin-Session-Store-DBIC>=0:www/p5-Catalyst-Plugin-Session-Store-DBIC \
		p5-Catalyst-Plugin-Session-Store-File>=0.07:www/p5-Catalyst-Plugin-Session-Store-File \
		p5-Catalyst-Plugin-Session>=0.05:www/p5-Catalyst-Plugin-Session \
		p5-Catalyst-Plugin-StackTrace>=0.02:www/p5-Catalyst-Plugin-StackTrace \
		p5-Catalyst-Runtime>=5.80:www/p5-Catalyst-Runtime \
		p5-Catalyst-View-Email>=0:www/p5-Catalyst-View-Email \
		p5-Catalyst-View-TT>=0.22:www/p5-Catalyst-View-TT \
		p5-CatalystX-LeakChecker>=0:www/p5-CatalystX-LeakChecker \
		p5-CatalystX-Profile>=0:www/p5-CatalystX-Profile \
		p5-CatalystX-REPL>=0:www/p5-CatalystX-REPL \
		p5-CatalystX-SimpleLogin>=0:www/p5-CatalystX-SimpleLogin \
		p5-FCGI>=0.71:www/p5-FCGI \
		p5-FCGI-ProcManager>=0:www/p5-FCGI-ProcManager \
		p5-Starman>=0:www/p5-Starman \
		p5-local-lib>=0:devel/p5-local-lib

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
