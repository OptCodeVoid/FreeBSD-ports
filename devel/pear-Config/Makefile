PORTNAME=	Config
PORTVERSION=	1.10.12
CATEGORIES=	devel www pear

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Your configurations swiss-army knife

LICENSE=	PHP301

USES=		pear

OPTIONS_DEFINE=	PEAR_XML_PARSER PEAR_XML_UTIL
PEAR_XML_PARSER_DESC=	PEAR::XML_Parser support
PEAR_XML_UTIL_DESC=	PEAR::XML_Util support

PEAR_XML_PARSER_RUN_DEPENDS=	${PEARDIR}/XML/Parser.php:devel/pear-XML_Parser@${PHP_FLAVOR}
PEAR_XML_UTIL_RUN_DEPENDS=	${PEARDIR}/XML/Util.php:devel/pear-XML_Util@${PHP_FLAVOR}

.include <bsd.port.mk>
