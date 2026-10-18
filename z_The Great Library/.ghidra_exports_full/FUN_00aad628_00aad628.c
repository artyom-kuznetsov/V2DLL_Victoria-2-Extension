// Facet_Register @ 00aad628 body=[[00aad628, 00aad651]]


/* Library Function - Multiple Matches With Same Base Name
    private: static void __cdecl std::locale::facet::_Facet_Register(class std::locale::facet *)
    void __cdecl std::_Facet_Register(class std::_Facet_base *)
   
   Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release */

void Facet_Register(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00aae9af(8);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = DAT_00f1f8d0;
    puVar1[1] = param_1;
  }
  DAT_00f1f8d0 = puVar1;
  return;
}

