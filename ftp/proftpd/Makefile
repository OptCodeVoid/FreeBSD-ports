PORTNAME?=	proftpd
.if !defined(DISTVERSION)
PORTVERSION?=	${PROFTPD_VERSION}
.endif
PORTREVISION?=	0
CATEGORIES?=	ftp
MASTER_SITES=	ftp://ftp.proftpd.org/distrib/source/ \
		https://github.com/downloads/proftpd/proftpd.github.com/ \
		ftp://ftpmirror.uk/ftp.proftpd.org/distrib/source/ \
		http://www.mirrorservice.org/sites/ftp.proftpd.org/distrib/source/
.if defined(_BUILDING_PROFTPD_MODULE)
DISTNAME=	proftpd-${PROFTPD_VERSION}
.endif

MAINTAINER?=	mm@FreeBSD.org
COMMENT?=	Highly configurable FTP daemon

LICENSE?=	GPLv2
LICENSE_FILE?=	${WRKSRC}/COPYING

.if defined(_BUILDING_PROFTPD_MODULE)
BUILD_DEPENDS+=	${LOCALBASE}/sbin/proftpd:ftp/proftpd
RUN_DEPENDS+=	${LOCALBASE}/sbin/proftpd:ftp/proftpd
.endif

PROFTPD_VERSION=	1.3.7c

CPE_VENDOR=	proftpd
CPE_PRODUCT=	proftpd

.if defined(_BUILDING_PROFTPD_MODULE)
DISTFILES+=	${DISTNAME}${EXTRACT_SUFX}
EXTRACT_ONLY+=	${DISTNAME}${EXTRACT_SUFX}
WRKSRC=		${WRKDIR}/proftpd-${PROFTPD_VERSION}
. if defined(_PROFTPD_MODULE_EXTRACT_ONLY)
EXTRACT_ONLY+=	${_PROFTPD_MODULE_EXTRACT_ONLY}
. endif
. if defined(_PROFTPD_MODULE_DISTFILES)
DISTFILES+=	${_PROFTPD_MODULE_DISTFILES}
DISTINFO_FILE=	${.CURDIR}/distinfo
. endif
. if defined(_PROFTPD_MODULE_MASTER_SITES)
MASTER_SITES+=	${_PROFTPD_MODULE_MASTER_SITES}
. endif
.endif

.if !defined(_BUILDING_PROFTPD_MODULE)
PORTDOCS=	*
.endif

MAKE_JOBS_UNSAFE=	yes
USES+=		gmake libtool
GNU_CONFIGURE=	yes

.if !defined(_BUILDING_PROFTPD_MODULE)
USES+=		cpe ssl
USE_RC_SUBR=	proftpd
.endif

LOCALSTATEDIR?=	/var/run

CONFIGURE_ARGS=--localstatedir=${LOCALSTATEDIR} \
		--libexecdir=${PREFIX}/libexec/proftpd \
		--with-pkgconfig=libdata/pkgconfig \
		--sysconfdir=${PREFIX}/etc \
		--enable-ctrls \
		--enable-dso \
		--disable-sendfile

CONFIGURE_ENV+=	install_user=`${ID} -u` \
		install_group=`${ID} -g`

.if defined(_BUILDING_PROFTPD_MODULE)
MODULES=		${_BUILDING_PROFTPD_MODULE}
.for m in ${MODULES}
__MODULES:=${__MODULES}:${m}
.endfor
CONFIGURE_ARGS+=	--with-shared=${__MODULES:C/^://g}
INCLUDEDIRS:=${INCLUDEDIRS}:${LOCALBASE}/include/proftpd
ALL_TARGET=	shared
BUILD_WRKSRC=	${WRKSRC}/modules
INSTALL_WRKSRC=	${WRKSRC}/modules
PLIST=		${WRKDIR}/PLIST
.for m in ${MODULES}
PLIST_FILES+=	libexec/proftpd/${m}.a \
		libexec/proftpd/${m}.so
.endfor
.else
OPTIONS_DEFINE=	DOCS HTMLDOCS IPV6 NLS MEMCACHE PCRE REDIS
OPTIONS_DEFAULT=	PCRE

HTMLDOCS_DESC=		Include HTML documentation
MEMCACHE_DESC=		Memcache support using libmemcached
REDIS_DESC=		Redis support using hiredis

PLIST_SUB+=	LOCALSTATEDIR="${LOCALSTATEDIR}"
OPTIONS_SUB=	yes

.endif #!defined(_BUILDING_PROFTPD_MODULE)

.if !defined(_BUILDING_PROFTPD_MODULE)
CPPFLAGS+=	-DHAVE_OPENSSL -I${OPENSSLINC}
LIBS+=		-lssl -lcrypto -L${OPENSSLLIB}
LDFLAGS+=	-lpthread
.endif

.if !defined(_BUILDING_PROFTPD_MODULE)
LIBDIRS?=	${LOCALBASE}/lib
INCLUDEDIRS?=	${LOCALBASE}/include

# Always built modules
MODULES+=	mod_ban \
		mod_copy \
		mod_ctrls_admin \
		mod_deflate \
		mod_dnsbl \
		mod_dynmasq \
		mod_exec \
		mod_ifsession \
		mod_ifversion \
		mod_qos \
		mod_quotatab \
		mod_quotatab_file \
		mod_quotatab_radius \
		mod_quotatab_sql \
		mod_radius \
		mod_ratio \
		mod_readme \
		mod_rewrite \
		mod_sftp \
		mod_sftp_pam \
		mod_sftp_sql \
		mod_shaper \
		mod_site_misc \
		mod_snmp \
		mod_sql \
		mod_sql_passwd \
		mod_tls \
		mod_tls_shmcache \
		mod_unique_id \
		mod_wrap2 \
		mod_wrap2_file \
		mod_wrap2_sql

IPV6_CONFIGURE_ENABLE=ipv6

NLS_CONFIGURE_ON=	--enable-nls
NLS_USES=		gettext iconv

PCRE_CONFIGURE_ENABLE=	pcre
PCRE_LIB_DEPENDS=	libpcre.so:devel/pcre

MEMCACHE_LIB_DEPENDS=	libmemcached.so:databases/libmemcached
MEMCACHE_CONFIGURE_ENABLE=	memcache
MEMCACHE_VARS=		MODULES+="mod_memcache mod_tls_memcache" \
			LIBS+="-L${LOCALBASE}/lib -lmemcached -lmemcachedutil"

REDIS_LIB_DEPENDS=	libhiredis.so:databases/hiredis
REDIS_CONFIGURE_ENABLE=		redis
REDIS_VARS=		MODULES+="mod_redis mod_tls_redis mod_wrap2_redis" \
			LIBS+="-L${LOCALBASE}/lib -lhiredis"

.include <bsd.port.options.mk>

# Generate modules configuration string
.for m in ${MODULES}
_MODULES:=${_MODULES}:${m}
.endfor

# Keep this here below, in case similar constructs need to be made
CONFIGURE_ARGS+=	--with-shared=${_MODULES:C/^://g}

.endif #!defined(_BUILDING_PROFTPD_MODULE)

CONFIGURE_ARGS+=	--with-includes=${INCLUDEDIRS}
CONFIGURE_ARGS+=	--with-libraries=${LIBDIRS}

.include <bsd.port.pre.mk>

.if !defined(_BUILDING_PROFTPD_MODULE)

.if empty(ICONV_PREFIX)
CONFIGURE_ARGS+=	ac_cv_lib_iconv_iconv_open=no \
			ac_cv_lib_iconv_libiconv_open=no
.endif

post-patch:
	@${REINPLACE_CMD} -e 's|proftpd\.conf |proftpd.conf.sample |g' ${WRKSRC}/Makefile.in

pre-configure:
	@${ECHO_MSG} "==> Configuring with following modules:"
	@${ECHO_MSG} "${MODULES:C/^://g}"

post-configure:
	${REINPLACE_CMD} -e 's: -lnsl::' ${WRKSRC}/Make.rules
	${REINPLACE_CMD} -e 's:/usr/sbin:${PREFIX}/sbin:' \
		-e 's:/usr/bin:${PREFIX}/bin:' \
		${WRKSRC}/src/proftpd.8 ${WRKSRC}/utils/ftpshut.8 \
		${WRKSRC}/utils/ftpcount.1

.endif #!defined(_BUILDING_PROFTPD_MODULE)

.if defined(_BUILDING_PROFTPD_MODULE)
pre-build:
	@cd ${WRKSRC} && ${MAKE_CMD} include/buildstamp.h

pre-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/libexec/proftpd

.else
post-install:
	@${MKDIR} ${STAGEDIR}/var/run/proftpd
.if ${PORT_OPTIONS:MDOCS}
	@${INSTALL} -d ${STAGEDIR}${DOCSDIR}
	@cd ${WRKSRC} && ${CP} README* RELEASE_NOTES ${STAGEDIR}${DOCSDIR}
	@cd ${WRKSRC}/doc/ && ${INSTALL_DATA} license.txt ${STAGEDIR}${DOCSDIR}
. if ${PORT_OPTIONS:MHTMLDOCS}
	@${INSTALL} -d ${STAGEDIR}${DOCSDIR}/html
	@cd ${WRKSRC}/doc/ && ${INSTALL_DATA} Configuration.html faq.html ${STAGEDIR}${DOCSDIR}/html
	@${CP} -RP ${WRKSRC}/doc/contrib ${STAGEDIR}${DOCSDIR}/html/contrib
	@${CP} -RP ${WRKSRC}/doc/modules ${STAGEDIR}${DOCSDIR}/html/modules
	@${CP} -RP ${WRKSRC}/doc/howto ${STAGEDIR}${DOCSDIR}/html/howto
. endif
.endif
	@${INSTALL_MAN} ${WRKSRC}/src/ftpdctl.8 ${STAGEDIR}${MAN8PREFIX}/man/man8/
.endif #!defined(_BUILDING_PROFTPD_MODULE)

.include <bsd.port.post.mk>
