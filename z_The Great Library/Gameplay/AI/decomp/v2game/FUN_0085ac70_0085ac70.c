// FUN_0085ac70 @ 0085ac70 body=[[0085ac70, 0085ae0c] [0085ae10, 0085ae5a]]


void FUN_0085ac70(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  void *_Dst;
  int unaff_EDI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b429f3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_008601b0(unaff_EDI + 0x20);
  FUN_008601b0(unaff_EDI + 0x30);
  FUN_008601b0(unaff_EDI + 0x130);
  FUN_0057afc0(unaff_EDI + 0x50);
  FUN_008601b0(unaff_EDI + 0x40);
  FUN_0057afc0(unaff_EDI + 0x88);
  FUN_008601b0(unaff_EDI + 0x78);
  FUN_0057afc0(unaff_EDI + 0xa4);
  FUN_008601b0(unaff_EDI + 0x94);
  FUN_0057afc0(unaff_EDI + 0xf8);
  FUN_008601b0(unaff_EDI + 0xe8);
  FUN_0057afc0(unaff_EDI + 0x114);
  FUN_008601b0(unaff_EDI + 0x104);
  FUN_0057afc0(unaff_EDI + 0x6c);
  FUN_008601b0(unaff_EDI + 0x5c);
  FUN_0057afc0(unaff_EDI + 0xc0);
  FUN_008601b0(unaff_EDI + 0xb0);
  FUN_0057afc0(unaff_EDI + 0xdc);
  FUN_008601b0(unaff_EDI + 0xcc);
  iVar2 = 0;
  do {
    if (DAT_0125fdd8 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)FUN_00aae9af(0x1c);
      local_8 = 0;
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3[1] = 0x1ff;
        *puVar3 = 0;
        _Dst = (void *)FUN_00aad56b(0x7fc);
        puVar3[2] = _Dst;
        _memset(_Dst,0,puVar3[1] * 4);
        puVar3[3] = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
      }
      puVar1 = DAT_0125fdd8;
      local_8 = 1;
      if ((puVar3 != DAT_0125fdd8) && (DAT_0125fdd8 != (undefined4 *)0x0)) {
        FUN_005c1a70(DAT_0125fdd8);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(puVar1);
      }
      local_8 = 0xffffffff;
      DAT_0125fdd8 = puVar3;
    }
    if ((int)(DAT_0125fdd8[4] - DAT_0125fdd8[3]) >> 2 <= iVar2) {
      *(undefined4 *)(unaff_EDI + 0x154) = 0;
      *(undefined4 *)(unaff_EDI + 0x150) = 0;
      *(undefined1 *)(unaff_EDI + 0x18) = 0;
      ExceptionList = local_10;
      return;
    }
    *(undefined4 *)(*(int *)(unaff_EDI + 0x120) + iVar2 * 4) = 0;
    iVar2 = iVar2 + 1;
  } while( true );
}

