PORTNAME=	qsf
PORTVERSION=	1.2.15
CATEGORIES=	mail
MASTER_SITES=	SF

MAINTAINER=	jack@jarasoft.net
COMMENT=	Small fast spam filter intended to be used with procmail

USES=	localbase tar:bzip2
GNU_CONFIGURE=	yes

PLIST_FILES=	bin/qsf \
		man/man1/qsf.1.gz

OPTIONS_DEFINE=	GDBM MYSQL SQLITE2
SQLITE2_DESC=	SQLite2 support

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MGDBM}
LIB_DEPENDS+=	libgdbm.so:databases/gdbm
.else
CONFIGURE_ARGS+=	--without-gdbm
.endif

.if ${PORT_OPTIONS:MMYSQL}
USES+=		mysql
.else
CONFIGURE_ARGS+=	--without-mysql
.endif

.if ${PORT_OPTIONS:MSQLITE2}
USES+=		sqlite:2
.else
CONFIGURE_ARGS+=	--without-sqlite
.endif

post-patch:
	@${REINPLACE_CMD} -e 's|Linux|@VERSION@|g' ${WRKSRC}/doc/quickref.1.in

.include <bsd.port.mk>
