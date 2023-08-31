#include "extendedbg.h"
#include <nds.h>

CEXTENDEDBG::CEXTENDEDBG(const uint16_t *data)
: m_dataSource(data)
{
}

void CEXTENDEDBG::Initialize() 
{
  vramSetBankA(VRAM_A_MAIN_BG);
  bgInit(3, BgType_Bmp16, BgSize_B16_256x256, 0, 0);

  
  decompress(m_dataSource, BG_GFX,  LZ77Vram);
}

void CEXTENDEDBG::Dispose()
{
}