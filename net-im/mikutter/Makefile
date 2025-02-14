PORTNAME=	mikutter
PORTVERSION=	5.0.4
CATEGORIES=	net-im ruby
MASTER_SITES=	https://mikutter.hachune.net/bin/ \
		LOCAL/meta/${PORTNAME}

MAINTAINER=	meta@FreeBSD.org
COMMENT=	Simple, powerful, and moeful Twitter client

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-gtk3>=3.4.9:x11-toolkits/rubygem-gtk3 \
		rubygem-cairo>=1.16.2:graphics/rubygem-cairo \
		rubygem-addressable>=2.8.0:www/rubygem-addressable \
		rubygem-delayer>=1.2.1:devel/rubygem-delayer \
		rubygem-delayer-deferred>=2.2.0:devel/rubygem-delayer-deferred \
		rubygem-diva>=2.0.1:devel/rubygem-diva \
		rubygem-gettext>=3.4.1:devel/rubygem-gettext \
		rubygem-gio2>=3.3.1:devel/rubygem-gio2 \
		rubygem-httpclient>=2.8.3:www/rubygem-httpclient \
		rubygem-instance_storage>=1.0.0:devel/rubygem-instance_storage \
		rubygem-locale>=2.1.2:devel/rubygem-locale \
		rubygem-memoist>=0.16.2:devel/rubygem-memoist \
		rubygem-moneta>=0.7:devel/rubygem-moneta \
		rubygem-nokogiri>=1.8.5:textproc/rubygem-nokogiri \
		rubygem-oauth>=0.5.8:net/rubygem-oauth \
		rubygem-pluggaloid>=1.7.0:devel/rubygem-pluggaloid \
		rubygem-prime>=0.1.2:math/rubygem-prime \
		rubygem-text>=1.3.1:textproc/rubygem-text \
		rubygem-totoridipjp>=0.1.0:www/rubygem-totoridipjp \
		rubygem-twitter-text>=2.1.0:textproc/rubygem-twitter-text \
		rubygem-typed-array>=0.1.2:devel/rubygem-typed-array \
		rubygem-unf>=0.1.4:textproc/rubygem-unf

USES=		shebangfix
USE_RUBY=	yes

NO_ARCH=	yes
NO_BUILD=	yes

SHEBANG_FILES=	mikutter.rb \
		core/miku/miku.rb

PORTDOCS=	README
SUB_FILES=	mikutter.desktop
SUB_LIST=	RUBY_SITELIBDIR=${RUBY_SITELIBDIR}

OPTIONS_DEFINE=		DOCS NOTIFY
NOTIFY_DESC=		notify-send support

OPTIONS_DEFAULT=	${OPTIONS_DEFINE}

NOTIFY_RUN_DEPENDS=	notify-send:devel/libnotify

post-patch:
	@${REINPLACE_CMD} \
		-e "s|%%RUBY_SITELIBDIR%%|${RUBY_SITELIBDIR}|" \
		-e "s|%%RUBY_WITH_SUFFIX%%|${RUBY_WITH_SUFFIX}|" \
		${WRKSRC}/mikutter.rb
	@${RM} -r ${WRKSRC}/vendor

do-install:
	${INSTALL_SCRIPT} ${INSTALL_WRKSRC}/mikutter.rb ${STAGEDIR}${PREFIX}/bin/mikutter
	cd ${INSTALL_WRKSRC} \
		&& ${COPYTREE_SHARE} core ${STAGEDIR}${RUBY_SITELIBDIR}/mikutter \
		&& ${COPYTREE_SHARE} plugin ${STAGEDIR}${RUBY_SITELIBDIR}/mikutter
	${INSTALL_DATA} ${WRKDIR}/${SUB_FILES} ${STAGEDIR}${PREFIX}/share/applications/
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${INSTALL_WRKSRC}/${PORTDOCS} ${STAGEDIR}${DOCSDIR}

x-generate-plist: stage
	${ECHO} bin/mikutter > pkg-plist.new
	${FIND} ${STAGEDIR}${RUBY_SITELIBDIR}/mikutter -type f | ${SORT} | ${SED} -e 's,${STAGEDIR}${RUBY_SITELIBDIR},%%RUBY_SITELIBDIR%%,' >> pkg-plist.new
	${ECHO} share/applications/mikutter.desktop >> pkg-plist.new

.include <bsd.port.mk>
