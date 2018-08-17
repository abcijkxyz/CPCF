// embed OpenEXR codec

#include "IlmImf/ImfAttribute.cpp"
#include "IlmImf/ImfBoxAttribute.cpp"
#include "IlmImf/ImfChannelListAttribute.cpp"
#include "IlmImf/ImfChromaticitiesAttribute.cpp"
#include "IlmImf/ImfCompressionAttribute.cpp"
#include "IlmImf/ImfDoubleAttribute.cpp"
#include "IlmImf/ImfEnvmapAttribute.cpp"
#include "IlmImf/ImfFloatAttribute.cpp"
#include "IlmImf/ImfIntAttribute.cpp"
#include "IlmImf/ImfChannelList.cpp"
#include "IlmImf/ImfChromaticities.cpp"
#include "IlmImf/ImfCompressor.cpp"
#include "IlmImf/ImfConvert.cpp"
#include "IlmImf/ImfCRgbaFile.cpp"
#include "IlmImf/ImfEnvmap.cpp"
#include "IlmImf/ImfFrameBuffer.cpp"
#include "IlmImf/imfheader.cpp"
#include "IlmImf/imfhuf.cpp"
#include "IlmImf/ImfInputFile.cpp"
#include "IlmImf/ImfIO.cpp"
#include "IlmImf/ImfKeyCode.cpp"
#include "IlmImf/ImfKeyCodeAttribute.cpp"
#include "IlmImf/ImfLineOrderAttribute.cpp"
#include "IlmImf/ImfLut.cpp"
#include "IlmImf/ImfMatrixAttribute.cpp"
#include "IlmImf/ImfMisc.cpp"
#include "IlmImf/ImfOpaqueAttribute.cpp"
#include "IlmImf/ImfOutputFile.cpp"
#include "IlmImf/ImfPizCompressor.cpp"
#include "IlmImf/ImfPreviewImage.cpp"
#include "IlmImf/ImfPreviewImageAttribute.cpp"
#include "IlmImf/ImfPxr24Compressor.cpp"
#include "IlmImf/ImfRgbaFile.cpp"
#include "IlmImf/ImfRgbaYca.cpp"
#include "IlmImf/ImfRleCompressor.cpp"
#include "IlmImf/ImfScanLineInputFile.cpp"
#include "IlmImf/ImfStandardAttributes.cpp"
#include "IlmImf/ImfStdIO.cpp"
#include "IlmImf/ImfStringAttribute.cpp"
#include "IlmImf/ImfTestFile.cpp"
#include "IlmImf/ImfThreading.cpp"
#include "IlmImf/ImfTileDescriptionAttribute.cpp"
#include "IlmImf/ImfTiledInputFile.cpp"
#include "IlmImf/ImfTiledMisc.cpp"
#include "IlmImf/ImfTiledOutputFile.cpp"
#include "IlmImf/ImfTiledRgbaFile.cpp"
#include "IlmImf/ImfTileOffsets.cpp"
#include "IlmImf/ImfTimeCode.cpp"
#include "IlmImf/ImfTimeCodeAttribute.cpp"
#include "IlmImf/ImfVecAttribute.cpp"
#include "IlmImf/ImfVersion.cpp"
#include "IlmImf/ImfWav.cpp"
#include "IlmImf/ImfZipCompressor.cpp"


#include "Iex/IexBaseExc.cpp"
#include "Iex/IexThrowErrnoExc.cpp"
#include "Half/half.cpp"

#include "IlmThread/IlmThread.cpp"
#include "IlmThread/IlmThreadMutex.cpp"
#include "IlmThread/IlmThreadPool.cpp"
#include "IlmThread/IlmThreadSemaphore.cpp"

#if defined(PLATFORM_WIN)
	#include "IlmThread/IlmThreadMutexWin32.cpp"
	#include "IlmThread/IlmThreadSemaphoreWin32.cpp"
	#include "IlmThread/IlmThreadWin32.cpp"
#else
	#include "IlmThread/IlmThreadMutexPosix.cpp"
	#include "IlmThread/IlmThreadPosix.cpp"
	#include "IlmThread/IlmThreadSemaphorePosix.cpp"
#endif
//#include "IlmThread/IlmThreadSemaphorePosixCompat.cpp"
