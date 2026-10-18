// CSimpleException @ 005f4ef0 body=[[005f4ef0, 005f4f28]]


/* Library Function - Single Match
    public: __thiscall CSimpleException::CSimpleException(int)
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2005 Debug, Visual Studio 2008 Debug, Visual
   Studio 2010 Debug */

CSimpleException * __thiscall CSimpleException::CSimpleException(CSimpleException *this,int param_1)

{
  FUN_005f3c40(param_1);
  *(undefined ***)this = CTerrainChange::vftable;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  return this;
}

