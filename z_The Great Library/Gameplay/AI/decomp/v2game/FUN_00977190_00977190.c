// FUN_00977190 @ 00977190 body=[[00977190, 00977246] [00977250, 009772bc] [009772c0, 009773c9] [009773cd, 00977402]]


/* WARNING: Type propagation algorithm not settling */

undefined4 * FUN_00977190(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 **ppuVar1;
  undefined4 **ppuVar2;
  int iVar3;
  undefined3 uVar4;
  undefined4 *puVar5;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined4 *local_18;
  undefined1 *local_14 [3];
  undefined1 local_8;
  undefined3 uStack_7;
  
  local_14[2] = &LAB_00b63e34;
  local_14[1] = ExceptionList;
  ExceptionList = local_14 + 1;
  param_1[1] = 0x18d;
  *param_1 = &PTR_FUN_00e3a544;
  param_1[2] = DAT_01268fec;
  param_1[3] = DAT_01268ff0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[10] = 0xf;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = CParty::vftable;
  param_1[0x11] = 0xf;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0x13] = param_2;
  param_1[0x14] = param_3;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  uStack_7 = 0;
  uVar4 = uStack_7;
  local_8 = 2;
  uStack_7 = 0;
  param_1[0x1a] = 43800000;
  param_1[0x1a] = DAT_01259abc;
  param_1[0x1b] = 43800000;
  iVar3 = DAT_01258a48;
  param_1[0x1b] = DAT_01259abc;
  local_18 = (undefined4 *)0x0;
  if (0 < (int)(*(int *)(iVar3 + 0x2c) - *(int *)(iVar3 + 0x28) & 0xfffffffcU)) {
    do {
      if (DAT_01258a40 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)FUN_00aae9af(0x1d8);
        local_8 = 3;
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          local_20 = 0xf;
          local_24 = 0;
          local_34[0] = local_34[0] & 0xffffff00;
          local_14[0] = (undefined1 *)puVar5;
          FUN_00409350("noIssue",7);
          local_8 = 4;
          FUN_009740b0(puVar5,DAT_0131be94,local_34,0);
          if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_34[0]);
          }
          local_20 = 0xf;
          local_24 = 0;
          local_34[0] = local_34[0] & 0xffffff00;
          *puVar5 = CNullIssue::vftable;
        }
        local_8 = 2;
        DAT_01258a40 = puVar5;
      }
      ppuVar1 = (undefined4 **)param_1[0x17];
      local_14[0] = (undefined1 *)DAT_01258a40;
      if ((local_14 < ppuVar1) && (ppuVar2 = (undefined4 **)param_1[0x16], ppuVar2 <= local_14)) {
        if (ppuVar1 == (undefined4 **)param_1[0x18]) {
          FUN_00a513f0();
        }
        if ((undefined4 *)param_1[0x17] != (undefined4 *)0x0) {
          *(undefined4 *)param_1[0x17] =
               *(undefined4 *)(param_1[0x16] + ((int)local_14 - (int)ppuVar2 >> 2) * 4);
        }
        param_1[0x17] = param_1[0x17] + 4;
      }
      else {
        if (ppuVar1 == (undefined4 **)param_1[0x18]) {
          FUN_00a513f0();
        }
        if ((undefined4 *)param_1[0x17] != (undefined4 *)0x0) {
          *(undefined4 *)param_1[0x17] = local_14[0];
        }
        param_1[0x17] = param_1[0x17] + 4;
      }
      local_18 = (undefined4 *)((int)local_18 + 1);
      uVar4 = uStack_7;
    } while ((int)local_18 < *(int *)(DAT_01258a48 + 0x2c) - *(int *)(DAT_01258a48 + 0x28) >> 2);
  }
  uStack_7 = uVar4;
  if (DAT_01258a34 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)FUN_00aae9af(0x1dc);
    local_8 = 5;
    if (puVar5 == (undefined4 *)0x0) {
      DAT_01258a34 = (undefined4 *)0x0;
      param_1[0x15] = 0;
    }
    else {
      local_20 = 0xf;
      local_24 = 0;
      local_34[0] = local_34[0] & 0xffffff00;
      local_18 = puVar5;
      FUN_00409350("noIdeology",10);
      _local_8 = CONCAT31(uStack_7,6);
      FUN_00972260(puVar5,DAT_0131be1c,local_34,0);
      if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_34[0]);
      }
      *puVar5 = CNullIdeology::vftable;
      DAT_01258a34 = puVar5;
      param_1[0x15] = puVar5;
    }
  }
  else {
    param_1[0x15] = DAT_01258a34;
  }
  ExceptionList = local_14[1];
  return param_1;
}

