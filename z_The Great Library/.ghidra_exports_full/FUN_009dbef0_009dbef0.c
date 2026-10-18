// FUN_009dbef0 @ 009dbef0 body=[[009dbef0, 009dc017] [009dc01b, 009dc06f] [009dc073, 009dc095] [009dc099, 009dc0b4]]


undefined4 FUN_009dbef0(void)

{
  uint uVar1;
  short sVar2;
  short *psVar3;
  short *psVar4;
  undefined4 *****pppppuVar5;
  uint local_68 [4];
  undefined4 local_58;
  uint local_54;
  uint local_4c [4];
  int local_3c;
  uint local_38;
  undefined4 ****local_30 [4];
  uint local_20;
  uint local_1c;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b4ef28;
  local_10 = ExceptionList;
  local_1c = 7;
  local_20 = 0;
  local_30[0] = (undefined4 ****)((uint)local_30[0] & 0xffff0000);
  local_8 = 0;
  uStack_7 = 0;
  ExceptionList = &local_10;
  psVar3 = (short *)FUN_00aad56b(40000);
  local_11 = '\0';
  while( true ) {
    local_38 = 7;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffff0000;
    psVar4 = psVar3;
    do {
      sVar2 = *psVar4;
      psVar4 = psVar4 + 1;
    } while (sVar2 != 0);
    FUN_0098a390(psVar3,(int)psVar4 - (int)(psVar3 + 1) >> 1);
    _local_8 = CONCAT31(uStack_7,1);
    FUN_009dca20(local_4c);
    if ((-local_20 - 1 < 2) || (uVar1 = local_20 + 1, 0x7ffffffe < uVar1)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aad3ad("string too long");
    }
    if (local_1c < uVar1) {
      FUN_0098a590(local_30,uVar1,local_20);
    }
    else if (uVar1 == 0) {
      pppppuVar5 = (undefined4 *****)local_30[0];
      if (local_1c < 8) {
        pppppuVar5 = local_30;
      }
      local_20 = uVar1;
      *(undefined2 *)pppppuVar5 = 0;
    }
    if (uVar1 != 0) {
      pppppuVar5 = (undefined4 *****)local_30[0];
      if (local_1c < 8) {
        pppppuVar5 = local_30;
      }
      *(undefined2 *)((int)pppppuVar5 + local_20 * 2) = 10;
      pppppuVar5 = (undefined4 *****)local_30[0];
      if (local_1c < 8) {
        pppppuVar5 = local_30;
      }
      local_20 = uVar1;
      *(undefined2 *)((int)pppppuVar5 + uVar1 * 2) = 0;
    }
    if (local_3c == 0) {
      local_11 = '\x01';
    }
    local_8 = 0;
    if (7 < local_38) break;
    if (local_11 != '\0') {
      FUN_00988850(local_68);
      _local_8 = CONCAT31(uStack_7,2);
      FUN_00408ed0(local_68,0,0xffffffff);
      FUN_00aaea59(psVar3);
      if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_68[0]);
      }
      local_54 = 0xf;
      local_58 = 0;
      local_68[0] = local_68[0] & 0xffffff00;
      if (7 < local_1c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_30[0]);
      }
      ExceptionList = local_10;
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_4c[0]);
}

