PORTNAME=	pacpl
PORTVERSION=	6.1.3
CATEGORIES=	audio
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Perl Audio Converter

LICENSE=	GPLv3+
LICENSE_FILE=	${WRKSRC}/COPYING

RUN_DEPENDS=	p5-Audio-FLAC-Header>0:audio/p5-Audio-FLAC-Header \
		p5-Audio-Scan>0:audio/p5-Audio-Scan \
		p5-CDDB_get>0:audio/p5-CDDB_get \
		p5-MP3-Tag>0:audio/p5-MP3-Tag \
		p5-Parallel-ForkManager>0:devel/p5-Parallel-ForkManager \
		p5-Switch>0:lang/p5-Switch \
		p5-String-ShellQuote>0:textproc/p5-String-ShellQuote

USES=		perl5 shebangfix
SHEBANG_FILES=	pacpl.in plugins/gnome/nautilus/PACPL-Convert \
		plugins/kde/PACPL-Konvert

NO_ARCH=	yes

WRKSRC=		${WRKDIR}/${PORTNAME}-code

OPTIONS_DEFINE=		APE CDPARANOIA DOCS FAAC FAAD FFMPEG KDE4 \
			LAME LAUDIO MUSEPACK MPLAYER OPTIMFROG OPUS \
			SNDFILE SOX SPEEX TOOLAME TTA VORBIS WAVPACK
OPTIONS_DEFAULT=	CDPARANOIA FAAC FAAD FFMPEG LAME VORBIS
OPTIONS_SUB=		yes

KDE4_DESC=		Konqueror/Dolphin integration
LAUDIO_DESC=		Laudio support
OPTIMFROG_DESC=		OptimFROG lossless audio support
OPUS_DESC=		Ogg Opus audio codec support
SOX_DESC=		Audio conversion support via SoX

APE_RUN_DEPENDS=	mac:audio/mac
CDPARANOIA_RUN_DEPENDS=	cdparanoia:audio/cdparanoia
FAAC_RUN_DEPENDS=	faac:audio/faac
FAAD_RUN_DEPENDS=	faad:audio/faad
FFMPEG_RUN_DEPENDS=	ffmpeg:multimedia/ffmpeg
LAME_RUN_DEPENDS=	lame:audio/lame
LAUDIO_RUN_DEPENDS=	laudio:audio/linux-laudio
MPLAYER_RUN_DEPENDS=	mplayer:multimedia/mplayer
MUSEPACK_RUN_DEPENDS=	mpcenc:audio/musepack
OPTIMFROG_RUN_DEPENDS=	ofr:audio/optimfrog
OPUS_RUN_DEPENDS=	opusenc:audio/opus-tools
SNDFILE_RUN_DEPENDS=	sndfile-convert:audio/libsndfile
SOX_RUN_DEPENDS=	sox:audio/sox
SPEEX_RUN_DEPENDS=	speexenc:audio/speex
TOOLAME_RUN_DEPENDS=	toolame:audio/toolame
TTA_RUN_DEPENDS=	ttaenc:audio/tta
VORBIS_RUN_DEPENDS=	vorbiscomment:audio/vorbis-tools
WAVPACK_RUN_DEPENDS=	wavpack:audio/wavpack

post-patch:
	@${REINPLACE_CMD} -e \
		's|"@sysconfdir@|"${ETCDIR}| ; \
		 s|"@pkgdatadir@|"${DATADIR}| ; \
		 s|^/etc/pacpl|${ETCDIR}|' ${WRKSRC}/pacpl.in
	@${REINPLACE_CMD} -e \
		's| /etc/pacpl| ${ETCDIR}|' ${WRKSRC}/pacpl.conf
	@${REINPLACE_CMD} -e \
		's|=/etc/pacpl|=${ETCDIR}| ; \
		 s|=/usr/bin|=${PREFIX}/libexec|' \
		${WRKSRC}/plugins/kde/pacpl.desktop
	@${MV} ${WRKSRC}/pacpl.in ${WRKSRC}/pacpl

do-build:
	@(cd ${WRKSRC} && pod2man pacpl pacpl.1)

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/pacpl ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/pacpl.1 ${STAGEDIR}${MANPREFIX}/man/man1
	@${MKDIR} ${STAGEDIR}${ETCDIR}
	${INSTALL_DATA} ${WRKSRC}/pacpl.png ${STAGEDIR}${ETCDIR}
.for i in codecs.conf pacpl.conf
	${INSTALL_DATA} ${WRKSRC}/${i} ${STAGEDIR}${ETCDIR}/${i}.sample
.endfor
	@${MKDIR} ${STAGEDIR}${ETCDIR}/modules
	${INSTALL_DATA} ${WRKSRC}/extra/sample.m ${STAGEDIR}${ETCDIR}/modules
	@${MKDIR} ${STAGEDIR}${DATADIR}/locale
	${INSTALL_DATA} ${WRKSRC}/po/*.po ${STAGEDIR}${DATADIR}/locale
	${INSTALL_SCRIPT} ${WRKSRC}/plugins/gnome/nautilus/PACPL-Convert \
		${STAGEDIR}${PREFIX}/libexec

do-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/ChangeLog ${WRKSRC}/README \
		${WRKSRC}/extra/README.module ${STAGEDIR}${DOCSDIR}

do-install-KDE4-on:
	${INSTALL_SCRIPT} ${WRKSRC}/plugins/kde/PACPL-Konvert \
		${STAGEDIR}${PREFIX}/libexec
	@${MKDIR} ${STAGEDIR}${PREFIX}/share/kde4/services/ServiceMenus
	${INSTALL_DATA} ${WRKSRC}/plugins/kde/pacpl.desktop \
		${STAGEDIR}${PREFIX}/share/kde4/services/ServiceMenus

.include <bsd.port.mk>
