PORTNAME=	lldpd
PORTVERSION=	1.0.14
CATEGORIES=	net-mgmt
MASTER_SITES=	http://media.luffy.cx/files/${PORTNAME}/

MAINTAINER=	freebsd@simweb.ch
COMMENT=	LLDP (802.1ab)/CDP/EDP/SONMP/FDP daemon and SNMP subagent

LICENSE=	ISCL
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libevent.so:devel/libevent

USES=		cpe libtool
CPE_VENDOR=	${PORTNAME}_project
USE_CSTD=	gnu99
USE_LDCONFIG=	yes
USE_RC_SUBR=	${PORTNAME}
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--disable-doxygen-doc \
		--enable-hardening \
		--enable-privsep \
		--with-privsep-chroot=/var/empty \
		--with-lldpd-ctl-socket=/var/run/lldpd.socket \
		--with-lldpd-pid-file=/var/run/lldpd.pid \
		--with-pkgconfigdir=${PREFIX}/libdata/pkgconfig
INSTALL_TARGET=	install-strip

USERS=	_lldpd
GROUPS=	_lldpd

OPTIONS_DEFINE=		BASH DOCS DTRACE JSON PIE PROPRIETARY READLINE SNMP XML ZSH
OPTIONS_DEFAULT=	BASH JSON PROPRIETARY SNMP XML ZSH
# ld(1) fails to link probes: Relocations in generic ELF (EM: 0)
OPTIONS_EXCLUDE_aarch64=	DTRACE
# dt_modtext:opensolaris/lib/libdtrace/common/dt_link.c: arm not implemented
OPTIONS_EXCLUDE_armv6=		DTRACE
OPTIONS_EXCLUDE_armv7=		DTRACE
OPTIONS_SUB=	yes

DTRACE_DESC=		DTrace support (BROKEN)
JSON_DESC=		JSON output support
PIE_DESC=		Build PIE (position independant executables)
PROPRIETARY_DESC=	Support proprietary protocols (CDP/EDP/FDP/SONMP)
SNMP_DESC=		Enable the use of SNMP
XML_DESC=		XML output support

DTRACE_CONFIGURE_ENABLE=	dtrace
JSON_LIB_DEPENDS=		libjansson.so:devel/jansson
JSON_USES=			pkgconfig
JSON_CONFIGURE_WITH=		json
PIE_CONFIGURE_ENABLE=		pie
PROPRIETARY_CONFIGURE_ENABLE=	cdp edp fdp sonmp
READLINE_CONFIGURE_WITH=	readline
SNMP_LIB_DEPENDS=		libnetsnmp.so:net-mgmt/net-snmp
SNMP_USES=			ssl
SNMP_CONFIGURE_WITH=		snmp
XML_LIB_DEPENDS=		libxml2.so:textproc/libxml2
# libedit needed in combination of READLINE and XML
XML_USES=			libedit
XML_CONFIGURE_WITH=		xml

post-patch:
	@${REINPLACE_CMD} -e 's|/etc|${PREFIX}|g' ${WRKSRC}/src/daemon/lldpd.8.in

post-install-DOCS-on:
	${INSTALL_DATA} ${FILESDIR}/README.bsd ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
