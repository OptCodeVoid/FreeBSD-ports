PORTNAME=	soundkonverter
PORTVERSION=	3.0.1
DISTVERSIONPREFIX=	v
PORTREVISION=	11
CATEGORIES=	audio kde

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Frontend to various audio converters (transcoder)

LICENSE=	GPLv2

LIB_DEPENDS=	libtag.so:audio/taglib \
		libcdda_paranoia.so:audio/cdparanoia \
		libphonon4qt5.so:multimedia/phonon

GH_ACCOUNT=	dfaust
USES=		cmake compiler:c++11-lang kde:5 qt:5
USE_GITHUB=	yes
USE_QT=		dbus concurrent core buildtools_build gui network printsupport \
		qmake_build widgets xml
USE_KDE=	auth codecs config configwidgets completion coreaddons crash \
		bookmarks guiaddons i18n iconthemes init itemviews jobwidgets \
		kdelibs4support kio libkcddb notifications parts textwidgets \
		service solid sonnet unitconversion windowsystem widgetsaddons \
		xmlgui \
		doctools_build
WRKSRC_SUBDIR=	src

OPTIONS_DEFAULT=	VORBIS FLAC NORMALIZE VORBISGAIN
OPTIONS_DEFINE=	NLS
OPTIONS_GROUP=	RIPPER CODEC FILTER REPLAYGAIN MISC
OPTIONS_GROUP_RIPPER=	CDRKIT
OPTIONS_GROUP_CODEC=	AFTEN FAAC FFMPEG FLAKE FLUIDSYNTH LAME MAC \
			MPLAYER MUSEPACK OPUSTOOLS SPEEX  \
			TIMIDITY TTA TWOLAME VORBIS WAVPACK LIBAV
OPTIONS_GROUP_FILTER=	SOX
OPTIONS_GROUP_REPLAYGAIN=	AACGAIN MP3GAIN \
			VORBISGAIN WAVPACK
OPTIONS_GROUP_MISC=	FLAC NORMALIZE
OPTIONS_SUB=	yes

CODEC_DESC=		Audio codec formats
FILTER_DESC=		Audio filter tools
MISC_DESC=		Audio tools that fit in more than one category
REPLAYGAIN_DESC=	Replaygain tools for codecs
RIPPER_DESC=		CD ripping tools

AFTEN_DESC=		ATSC A/52 audio encoder
AFTEN_RUN_DEPENDS=	aften:audio/aften

AACGAIN_DESC=		AAC audio replaygain
AACGAIN_RUN_DEPENDS=	aacgain:audio/aacgain

CDRKIT_DESC=		CD ripping support (cdrkit)
CDRKIT_RUN_DEPENDS=	icedax:sysutils/cdrkit

FAAC_RUN_DEPENDS=	faac:audio/faac \
			faad:audio/faad

FFMPEG_RUN_DEPENDS=	ffmpeg:multimedia/ffmpeg

FLAC_DESC=		FLAC codec and replaygain
FLAC_RUN_DEPENDS=	flac:audio/flac

FLAKE_DESC=		FLAC audio codec
FLAKE_RUN_DEPENDS=	flake:audio/flake

FLUIDSYNTH_DESC=	SoundFont 2 audio codec
FLUIDSYNTH_RUN_DEPENDS=	fluidsynth:audio/fluidsynth

LAME_RUN_DEPENDS=	lame:audio/lame

LIBAV_DESC=		LibAV support (WMA, AIFF, AC3, APE...)
LIBAV_RUN_DEPENDS=	avconv:multimedia/libav

MAC_DESC=		Monkey's Audio lossless codec
MAC_RUN_DEPENDS=	mac:audio/mac

MP3GAIN_DESC=		MP3 audio replaygain
MP3GAIN_RUN_DEPENDS=	mp3gain:audio/mp3gain

MPLAYER_RUN_DEPENDS=	mplayer:multimedia/mplayer

MUSEPACK_RUN_DEPENDS=	mpcenc:audio/musepack

NORMALIZE_DESC=		MP3/Ogg Vorbis audio filter and replaygain
NORMALIZE_RUN_DEPENDS=	normalize:audio/normalize

OPUSTOOLS_DESC=		Opus audio codec
OPUSTOOLS_RUN_DEPENDS=	opusenc:audio/opus-tools

SOX_DESC=		Universal sound sample translator
SOX_RUN_DEPENDS=	sox:audio/sox

SPEEX_RUN_DEPENDS=	speexenc:audio/speex

TIMIDITY_DESC=		MIDI audio decoder
TIMIDITY_RUN_DEPENDS=	timidity:audio/timidity

TTA_RUN_DEPENDS=	ttaenc:audio/tta

TWOLAME_RUN_DEPENDS=	twolame:audio/twolame

VORBISGAIN_DESC=	Ogg Vorbis audio replaygain
VORBISGAIN_RUN_DEPENDS=	vorbisgain:audio/vorbisgain

VORBIS_RUN_DEPENDS=	oggenc:audio/vorbis-tools

WAVPACK_RUN_DEPENDS=	wavpack:audio/wavpack

NLS_USES=	gettext
NLS_CMAKE_OFF=	-DBUILD_po=FALSE

.include <bsd.port.mk>
