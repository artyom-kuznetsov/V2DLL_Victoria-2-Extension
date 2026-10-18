// FUN_0047aaa0 @ 0047aaa0 body=[[0047aaa0, 0047ab72] [0047ab76, 0047ac27]]


/* WARNING: Type propagation algorithm not settling */

void FUN_0047aaa0(int param_1)

{
  undefined4 uVar1;
  undefined4 **ppuVar2;
  undefined4 **ppuVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int in_ECX;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  int local_18;
  undefined1 *local_14 [3];
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  local_14[2] = &LAB_00b4d1fc;
  local_14[1] = ExceptionList;
  ExceptionList = local_14 + 1;
  FUN_004bf300(in_ECX);
  local_18 = in_ECX;
  if (0 < in_ECX) {
    do {
      puVar5 = (undefined4 *)FUN_00aae9af(0x5c);
      local_8 = 0;
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        uVar1 = *(undefined4 *)(param_1 + 0x14);
        local_20 = 0xf;
        local_24 = 0;
        local_34[0] = local_34[0] & 0xffffff00;
        local_14[0] = (undefined1 *)puVar5;
        FUN_00409350("trade_flow_entry",0x10);
        puVar5[1] = 0;
        puVar5[2] = 0;
        puVar5[3] = 0;
        *(undefined1 *)(puVar5 + 4) = 0;
        DAT_013f08e0 = DAT_013f08e0 + 1;
        *(undefined1 *)(puVar5 + 5) = 0;
        *(undefined1 *)(puVar5 + 6) = 0;
        puVar5[7] = &PTR_FUN_00e39158;
        piVar4 = DAT_01258a80;
        local_8._0_1_ = 5;
        *puVar5 = &PTR_FUN_00e392f0;
        puVar5[7] = &PTR_FUN_00e39320;
        *(undefined1 *)(puVar5 + 9) = 0;
        uVar6 = (**(code **)(*piVar4 + 0x2c))(local_34,uVar1);
        puVar5[8] = uVar6;
        if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_34[0]);
        }
        *puVar5 = CTradeFlowListboxItem::vftable;
        puVar5[7] = CTradeFlowListboxItem::vftable;
        puVar5[10] = uVar1;
        local_20 = 0xf;
        local_24 = 0;
        local_34[0] = local_34[0] & 0xffffff00;
        puVar5[0x15] = 0xf;
        puVar5[0x14] = 0;
        *(undefined1 *)(puVar5 + 0x10) = 0;
        local_8 = CONCAT31(local_8._1_3_,8);
        FUN_004763e0();
      }
      local_8 = 0xffffffff;
      ppuVar2 = *(undefined4 ***)(param_1 + 0x60);
      local_14[0] = (undefined1 *)puVar5;
      if (local_14 < ppuVar2) {
        ppuVar3 = *(undefined4 ***)(param_1 + 0x5c);
        if (local_14 < ppuVar3) goto LAB_0047abf2;
        if (ppuVar2 == *(undefined4 ***)(param_1 + 100)) {
          FUN_00a513f0();
        }
        if (*(undefined4 **)(param_1 + 0x60) != (undefined4 *)0x0) {
          **(undefined4 **)(param_1 + 0x60) =
               *(undefined4 *)(*(int *)(param_1 + 0x5c) + ((int)local_14 - (int)ppuVar3 >> 2) * 4);
        }
      }
      else {
LAB_0047abf2:
        if (ppuVar2 == *(undefined4 ***)(param_1 + 100)) {
          FUN_00a513f0();
        }
        if (*(undefined4 **)(param_1 + 0x60) != (undefined4 *)0x0) {
          **(undefined4 **)(param_1 + 0x60) = puVar5;
        }
      }
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 4;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  ExceptionList = local_14[1];
  return;
}

