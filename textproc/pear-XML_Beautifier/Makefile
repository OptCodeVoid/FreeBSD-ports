PORTNAME=	XML_Beautifier
PORTVERSION=	1.2.2
CATEGORIES=	textproc devel pear

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	PEAR class to format XML documents

BUILD_DEPENDS=	${PEARDIR}/XML/Parser.php:devel/pear-XML_Parser@${PHP_FLAVOR} \
		${PEARDIR}/XML/Util.php:devel/pear-XML_Util@${PHP_FLAVOR}
RUN_DEPENDS=	${PEARDIR}/XML/Parser.php:devel/pear-XML_Parser@${PHP_FLAVOR} \
		${PEARDIR}/XML/Util.php:devel/pear-XML_Util@${PHP_FLAVOR}

USES=		pear

.include <bsd.port.mk>
