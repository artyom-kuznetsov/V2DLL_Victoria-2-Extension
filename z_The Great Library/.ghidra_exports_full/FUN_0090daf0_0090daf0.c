// FUN_0090daf0 @ 0090daf0 body=[[0090daf0, 0090de53] [0090de6e, 0090df1f]]


void FUN_0090daf0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int in_ECX;
  undefined4 extraout_ECX;
  undefined4 unaff_ESI;
  undefined1 local_f4 [4];
  uint uStack_f0;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined **appuStack_70 [19];
  void *pvStack_24;
  undefined1 uStack_1c;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b546a6;
  pvStack_14 = ExceptionList;
  if (param_2 < 0x471) {
    if (param_2 == 0x470) {
      ExceptionList = &pvStack_14;
      iVar2 = FUN_00aae9af(0x30);
      if (iVar2 == 0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = (int *)FUN_0090df20();
      }
      (**(code **)(*piVar3 + 0xc))(param_1);
      iVar2 = *(int *)(in_ECX + 0xc);
      puVar4 = (undefined4 *)FUN_00aae9af(0x10);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        *puVar4 = piVar3;
        puVar4[1] = iVar2;
        puVar4[2] = 0;
        *(undefined1 *)(puVar4 + 3) = 0;
      }
      iVar1 = *(int *)(in_ECX + 0x10);
      *(undefined4 **)(in_ECX + 0xc) = puVar4;
      *(int *)(in_ECX + 0x10) = iVar1 + 1;
      if (iVar1 == 0) {
        *(undefined4 **)(in_ECX + 8) = puVar4;
      }
      else {
        *(undefined4 **)(iVar2 + 8) = puVar4;
      }
      (**(code **)(*piVar3 + 0x28))();
      iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + piVar3[3] * 4) + 0xbe8) +
                      piVar3[5] * 4);
      *(undefined1 *)(iVar2 + 0x71) = 1;
      *(int **)(iVar2 + 0x38) = piVar3;
      ExceptionList = pvStack_18;
      return;
    }
    if (param_2 < 0x337) {
      if (param_2 == 0x336) {
        ExceptionList = &pvStack_14;
        piVar3 = (int *)FUN_00aae9af(0x24);
        if (piVar3 == (int *)0x0) {
LAB_0090db6d:
          piVar3 = (int *)0x0;
        }
        else {
          FUN_0057fb40();
          *piVar3 = (int)CVassal::vftable;
        }
      }
      else {
        if (param_2 == 0x28a) {
          ExceptionList = &pvStack_14;
          (**(code **)(*(int *)(in_ECX + 0x18) + 0xc))(param_1);
          ExceptionList = pvStack_18;
          return;
        }
        if (param_2 == 0x332) {
          ExceptionList = &pvStack_14;
          iVar2 = FUN_00aae9af(0x24);
          if (iVar2 == 0) goto LAB_0090dead;
          piVar3 = (int *)FUN_005163c0();
          goto LAB_0090deaf;
        }
        if (param_2 != 0x333) goto LAB_0090dd92;
        ExceptionList = &pvStack_14;
        iVar2 = FUN_00aae9af(0x28);
        if (iVar2 == 0) goto LAB_0090db6d;
        piVar3 = (int *)FUN_0092c990();
      }
      goto LAB_0090db6f;
    }
    if (param_2 == 0x343) {
      ExceptionList = &pvStack_14;
      iVar2 = FUN_00aae9af(0x28);
      if (iVar2 == 0) {
LAB_0090dead:
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = (int *)FUN_0092d0a0();
      }
    }
    else {
      if (param_2 != 0x443) {
LAB_0090dd92:
        local_e0 = 0xf;
        local_e4 = 0;
        local_f4[0] = 0;
        ExceptionList = &pvStack_14;
        FUN_00409350("Diplomacy.cpp",0xd);
        local_c = 0;
        uVar5 = FUN_004015b0(local_f4,0x74,0x10004);
        local_c = CONCAT31(local_c._1_3_,1);
        FUN_00987d50(uVar5,"Unknown tag in diplomacy field in savegame <",0x2c,0);
        uVar5 = FUN_00418e30(uVar5,param_1 + 0x24,extraout_ECX,&DAT_00e07938);
        uVar5 = FUN_00418e30(uVar5);
        FUN_00401280(uVar5);
        uStack_1c = 0;
        FUN_00987ac0(appuStack_70);
        appuStack_70[0] = std::ios_base::vftable;
        FUN_00aad52d(appuStack_70);
        if (uStack_f0 < 0x10) {
          ExceptionList = pvStack_24;
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(unaff_ESI);
      }
      ExceptionList = &pvStack_14;
      iVar2 = FUN_00aae9af(0x24);
      if (iVar2 == 0) goto LAB_0090dead;
      piVar3 = (int *)FUN_0090df90();
    }
LAB_0090deaf:
    (**(code **)(*piVar3 + 0xc))(param_1);
    iVar2 = *(int *)(in_ECX + 0xc);
    puVar4 = (undefined4 *)FUN_00aae9af(0x10);
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = piVar3;
      puVar4[1] = iVar2;
      puVar4[2] = 0;
      *(undefined1 *)(puVar4 + 3) = 0;
      goto LAB_0090dee4;
    }
  }
  else {
    if (param_2 < 0x8e1) {
      if (param_2 == 0x8e0) {
        ExceptionList = &pvStack_14;
        iVar2 = FUN_00aae9af(0x24);
        if (iVar2 == 0) goto LAB_0090dead;
        piVar3 = (int *)FUN_0092ca00();
        goto LAB_0090deaf;
      }
      if (param_2 == 0x6c2) goto LAB_0090de94;
      if (param_2 != 0x8a4) goto LAB_0090dd92;
      ExceptionList = &pvStack_14;
      iVar2 = FUN_00aae9af(0x24);
      if (iVar2 == 0) goto LAB_0090db6d;
      piVar3 = (int *)FUN_0092cdb0();
    }
    else {
      if (param_2 == 0x8e5) {
LAB_0090de94:
        ExceptionList = &pvStack_14;
        iVar2 = FUN_00aae9af(0x30);
        if (iVar2 == 0) goto LAB_0090dead;
        piVar3 = (int *)FUN_0092cb70();
        goto LAB_0090deaf;
      }
      if (param_2 != 0x93a) goto LAB_0090dd92;
      ExceptionList = &pvStack_14;
      piVar3 = (int *)FUN_00aae9af(0x24);
      if (piVar3 == (int *)0x0) goto LAB_0090db6d;
      FUN_0057fb40();
      *piVar3 = (int)CSubstate::vftable;
    }
LAB_0090db6f:
    (**(code **)(*piVar3 + 0xc))(param_1);
    iVar2 = *(int *)(in_ECX + 0xc);
    puVar4 = (undefined4 *)FUN_00aae9af(0x10);
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = piVar3;
      puVar4[1] = iVar2;
      puVar4[2] = 0;
      *(undefined1 *)(puVar4 + 3) = 0;
      goto LAB_0090dee4;
    }
  }
  puVar4 = (undefined4 *)0x0;
LAB_0090dee4:
  *(undefined4 **)(in_ECX + 0xc) = puVar4;
  iVar1 = *(int *)(in_ECX + 0x10);
  *(int *)(in_ECX + 0x10) = iVar1 + 1;
  if (iVar1 == 0) {
    *(undefined4 **)(in_ECX + 8) = puVar4;
  }
  else {
    *(undefined4 **)(iVar2 + 8) = puVar4;
  }
  (**(code **)(*piVar3 + 0x28))();
  ExceptionList = pvStack_24;
  return;
}

