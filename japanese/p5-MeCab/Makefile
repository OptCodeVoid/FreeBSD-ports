PORTNAME=	MeCab
PORTVERSION=	0.996
PORTREVISION=	2
CATEGORIES=	japanese textproc perl5
MASTER_SITES=	https://drive.google.com/uc?export=download&id=0B4y35FiV1wh7M1pQam5XQjBLcU0&dummy=/
DISTNAME=	${PORTNAME:tl}-perl-${PORTVERSION}

MAINTAINER=	perl@FreeBSD.org
COMMENT=	MeCab library module for Perl5

LICENSE=	BSD3CLAUSE GPLv2 LGPL21
LICENSE_COMB=	dual

LIB_DEPENDS=	libmecab.so:japanese/mecab

USES=		perl5
USE_PERL5=	configure

OPTIONS_DEFINE=	EXAMPLES

.include <bsd.port.pre.mk>

PKGNAMEPREFIX:=	${PKGNAMEPREFIX}p5-

pre-install:
	${STRIP_CMD} ${WRKSRC}/blib/arch/auto/MeCab/MeCab.so

post-install:
	@${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/test.pl ${STAGEDIR}${EXAMPLESDIR}

.include <bsd.port.post.mk>
