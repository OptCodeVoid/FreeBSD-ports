PORTNAME=	mosquitto
PORTVERSION=	2.0.13
CATEGORIES=	net
MASTER_SITES=	https://mosquitto.org/files/source/

MAINTAINER=	joe@thrallingpenguin.com
COMMENT=	Open source MQTT broker

LICENSE=	EPL

BUILD_DEPENDS=	xsltproc:textproc/libxslt \
		docbook-xsl>0:textproc/docbook-xsl
LIB_DEPENDS=	libuuid.so:misc/e2fsprogs-libuuid \
		libcjson.so:devel/libcjson
RUN_DEPENDS=	${LOCALBASE}/share/certs/ca-root-nss.crt:security/ca_root_nss

USES=		cmake cpe ssl
USE_RC_SUBR=	mosquitto
USE_LDCONFIG=	yes
CMAKE_ARGS=	-DCMAKE_LIBDATADIR:PATH="${PREFIX}/libdata"
CPE_VENDOR=	eclipse

USERS=		nobody

PLIST_SUB=	PORTVERSION=${PORTVERSION}

OPTIONS_DEFINE=	CARES WS
OPTIONS_DEFAULT=	CARES

CARES_LIB_DEPENDS=	libcares.so:dns/c-ares
CARES_CMAKE_ON=	-DWITH_SRV:BOOL=ON

WS_DESC=	MQTT over Websockets support
WS_LIB_DEPENDS=	libwebsockets.so:net/libwebsockets
WS_CMAKE_ON=	-DWITH_WEBSOCKETS:BOOL=ON

post-patch:
	@${REINPLACE_CMD} -e '/ldconfig/d' ${WRKSRC}/src/CMakeLists.txt \
		${WRKSRC}/lib/CMakeLists.txt ${WRKSRC}/lib/cpp/CMakeLists.txt
	@${REINPLACE_CMD} -e 's|%%PREFIX%%|${PREFIX}|g' ${WRKSRC}/CMakeLists.txt

post-install:
	${SED} -e '/cafile/s,/usr/local,${LOCALBASE},' \
		${STAGEDIR}${ETCDIR}/mosquitto.conf > \
		${STAGEDIR}${ETCDIR}/mosquitto.conf.sample
	${MV} ${STAGEDIR}${ETCDIR}/pwfile.example \
		${STAGEDIR}${ETCDIR}/pwfile.sample
	${MV} ${STAGEDIR}${ETCDIR}/pskfile.example \
		${STAGEDIR}${ETCDIR}/pskfile.sample
	${MV} ${STAGEDIR}${ETCDIR}/aclfile.example \
		${STAGEDIR}${ETCDIR}/aclfile.sample

.include <bsd.port.mk>
