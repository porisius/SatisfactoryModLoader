// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGArchives64.h"

FArchiveLoadCompressedProxy64::FArchiveLoadCompressedProxy64(const TArray<uint8, TSizedDefaultAllocator<64>>& InCompressedData, FName CompressionFormat, ECompressionFlags InCompressionFlags): CompressedData(InCompressedData){ }
void FArchiveLoadCompressedProxy64::Serialize(void* Data, int64 Count){ FArchive::Serialize(Data,Count); }
FArchiveSaveCompressedProxy64::FArchiveSaveCompressedProxy64(EVS2015Redirector, TArray<uint8, TSizedDefaultAllocator<64>>& InCompressedData, ECompressionFlags InCompressionFlags): CompressedData(InCompressedData){ }
FArchiveSaveCompressedProxy64::FArchiveSaveCompressedProxy64(TArray<uint8, TSizedDefaultAllocator<64>>& InCompressedData, FName InCompressionFormat, ECompressionFlags InCompressionFlags): CompressedData(InCompressedData){ }
void FArchiveSaveCompressedProxy64::Serialize(void* Data, int64 Count){ FArchive::Serialize(Data,Count); }

FArchiveLoadCompressedProxy64::~FArchiveLoadCompressedProxy64(){ }
void FArchiveLoadCompressedProxy64::Seek(int64 InPos){ }
int64 FArchiveLoadCompressedProxy64::Tell(){ return int64(); }
void FArchiveLoadCompressedProxy64::DecompressMoreData(){ }
FArchiveSaveCompressedProxy64::~FArchiveSaveCompressedProxy64(){ }
void FArchiveSaveCompressedProxy64::Flush(){ }
void FArchiveSaveCompressedProxy64::Seek(int64 InPos){ }
int64 FArchiveSaveCompressedProxy64::Tell(){ return int64(); }
