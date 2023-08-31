#pragma once

#include <stdint.h>

typedef class CEXTENDEDBG
{
  protected:
    const uint16_t *m_dataSource ;
  public:
    CEXTENDEDBG(const uint16_t *data); 
    
    void Initialize() ;
    void Dispose() ;
    
} CEXTENDEDBG ;
