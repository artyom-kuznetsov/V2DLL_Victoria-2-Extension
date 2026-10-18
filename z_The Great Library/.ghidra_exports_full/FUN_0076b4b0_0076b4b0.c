// FUN_0076b4b0 @ 0076b4b0 body=[[0076b4b0, 0076b5ea] [0076b5ee, 0076b616] [0076b61a, 0076b644] [0076b648, 0076b6e3] [0076b6e7, 0076b78d] [0076b791, 0076b7f1] [0076b7f5, 0076b8e3] [0076b8e7, 0076b92c]]


/* WARNING: Removing unreachable block (ram,0x0076b6da) */
/* WARNING: Removing unreachable block (ram,0x0076b784) */

void FUN_0076b4b0(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  code *pcVar4;
  int in_ECX;
  uint unaff_EBX;
  undefined4 unaff_ESI;
  undefined1 *puVar5;
  char *pcStack_c0;
  undefined1 *puStack_bc;
  uint auStack_a0 [3];
  int *piStack_94;
  undefined4 uStack_90;
  uint uStack_8c;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined2 uStack_78;
  undefined4 uStack_74;
  undefined1 uStack_70;
  undefined4 uStack_6c;
  uint uStack_58;
  undefined1 auStack_50 [8];
  undefined4 uStack_48;
  uint uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  char acStack_38 [4];
  void *pvStack_34;
  undefined4 uStack_2c;
  uint uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b6cd5f;
  pvStack_14 = ExceptionList;
  puStack_bc = (undefined1 *)0x0;
  pcStack_c0 = "";
  ExceptionList = &pvStack_14;
  FUN_00409350();
  puStack_bc = (undefined1 *)0x76b4f6;
  iVar1 = (**(code **)(**(int **)(in_ECX + 4) + 0x100))();
  puStack_bc = (undefined1 *)0x8;
  pcStack_c0 = "checksum";
  *(undefined4 *)(in_ECX + 0x5c0) = *(undefined4 *)(iVar1 + 0x130);
  auStack_a0[2] = 0xf;
  auStack_a0[1] = 0;
  FUN_00409350();
  uStack_c = 0;
  puStack_bc = (undefined1 *)0xb;
  pcStack_c0 = "multiplayer";
  uStack_3c = 0xf;
  uStack_40 = 0;
  auStack_50[0] = 0;
  FUN_00409350();
  uStack_c = CONCAT31(uStack_c._1_3_,1);
  piVar3 = *(int **)(DAT_012588e8 + 0xb24);
  puStack_bc = auStack_50;
  pcStack_c0 = (char *)0x76b571;
  piStack_94 = (int *)(**(code **)(**(int **)(in_ECX + 0x278) + 0x6c))();
  pcStack_c0 = (char *)0x76b581;
  iVar1 = (**(code **)(*piVar3 + 0x100))();
  pcStack_c0 = acStack_38;
  uVar2 = FUN_009da9a0(iVar1 + 0x20);
  puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,2);
  pcStack_c0 = &stack0xffffff50;
  auStack_a0[2] = (**(code **)(*piStack_94 + 0x3c))();
  FUN_00408ed0(uVar2,0,0xffffffff);
  FUN_00a5ecc0(uVar2,0);
  if (0xf < uStack_28) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_3c);
  }
  uStack_28 = 0xf;
  uStack_2c = 0;
  uStack_3c = uStack_3c & 0xffffff00;
  if (0xf < uStack_44) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_58);
  }
  pvStack_14 = (void *)0xffffffff;
  uStack_44 = 0xf;
  uStack_48 = 0;
  uStack_58 = uStack_58 & 0xffffff00;
  if (0xf < auStack_a0[0]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_ESI);
  }
  if (*(int *)(in_ECX + 0x5c0) != 0) {
    (**(code **)(**(int **)(in_ECX + 0x5c4) + 4))();
  }
  FUN_00777760(in_ECX);
  if (DAT_012589ac == 0) {
    iVar1 = (**(code **)(**(int **)(in_ECX + 4) + 0x44))();
    puVar5 = (undefined1 *)0x0;
    (**(code **)(**(int **)(iVar1 + 0x38) + 8))(0,0);
    puStack_bc = (undefined1 *)((uint)puStack_bc & 0xffffff00);
    FUN_00409350("lobby_chat_edit",0xf);
    uStack_1c = 3;
    iVar1 = (**(code **)(**(int **)(in_ECX + 0x278) + 0x40))(&puStack_bc);
    *(undefined1 *)(iVar1 + 0x165) = 1;
    uStack_20 = 0xffffffff;
    unaff_EBX = 0;
    pcStack_c0 = (char *)((uint)pcStack_c0 & 0xffffff00);
    FUN_00409350("lobby_chat_edit",0xf);
    uStack_20 = 4;
    piVar3 = (int *)(**(code **)(**(int **)(in_ECX + 0x278) + 0x40))(&pcStack_c0);
    pcVar4 = *(code **)(*piVar3 + 0x38);
  }
  else {
    auStack_a0[0] = 0xf;
    FUN_00409350("lobby_chat_edit",0xf);
    pvStack_14 = (void *)0x5;
    puVar5 = &stack0xffffff4c;
    iVar1 = (**(code **)(**(int **)(in_ECX + 0x278) + 0x40))(puVar5);
    *(undefined1 *)(iVar1 + 0x165) = 0;
    uStack_18 = 0xffffffff;
    FUN_00409350("lobby_chat_edit",0xf);
    uStack_18 = 6;
    piVar3 = (int *)(**(code **)(**(int **)(in_ECX + 0x278) + 0x40))(&stack0xffffff48);
    pcVar4 = *(code **)(*piVar3 + 0x34);
  }
  (*pcVar4)();
  uStack_24 = 0xffffffff;
  if (unaff_EBX < 0x10) {
    iVar1 = (**(code **)(**(int **)(in_ECX + 4) + 0x44))();
    uVar2 = *(undefined4 *)(iVar1 + 0x6c);
    uStack_8c = 0xf;
    uStack_90 = 0;
    auStack_a0[0] = auStack_a0[0] & 0xffffff00;
    FUN_00408ed0(*(int *)(in_ECX + 4) + 0x98,0,0xffffffff);
    uStack_80 = 0x2d2d2d;
    uStack_7c = 0;
    uStack_78 = 0x100;
    uStack_74 = 0;
    uStack_70 = 0;
    uStack_6c = DAT_01259abc;
    uStack_24 = 7;
    uStack_84 = uVar2;
    FUN_00408ed0(auStack_a0,0,0xffffffff);
    *(undefined4 *)(in_ECX + 0x2ec) = uStack_84;
    *(undefined4 *)(in_ECX + 0x2f0) = uStack_80;
    *(undefined1 *)(in_ECX + 0x2f8) = (undefined1)uStack_78;
    *(undefined4 *)(in_ECX + 0x2f4) = uStack_7c;
    *(undefined1 *)(in_ECX + 0x2f9) = uStack_78._1_1_;
    uStack_24 = 0xffffffff;
    *(undefined4 *)(in_ECX + 0x2fc) = uStack_74;
    *(undefined1 *)(in_ECX + 0x300) = uStack_70;
    *(undefined4 *)(in_ECX + 0x304) = uStack_6c;
    if (uStack_8c < 0x10) {
      uStack_8c = 0xf;
      uStack_90 = 0;
      auStack_a0[0] = auStack_a0[0] & 0xffffff00;
      FUN_0076ba60();
      iVar1 = (**(code **)(**(int **)(in_ECX + 4) + 0x100))();
      (**(code **)(**(int **)(iVar1 + 0xe4) + 0x10))(0);
      ExceptionList = pvStack_34;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(auStack_a0[0]);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(puVar5);
}

