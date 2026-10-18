// FUN_0073c4e0 @ 0073c4e0 body=[[0073c4e0, 0073c55a] [0073c55e, 0073c59c] [0073c5a0, 0073c5c8] [0073c5d0, 0073c7d0] [0073c7d4, 0073c854] [0073c858, 0073c872]]


void FUN_0073c4e0(void)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int in_ECX;
  int *piVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  uint uStack_78;
  uint uStack_74;
  undefined1 local_70 [8];
  undefined4 uStack_68;
  uint uStack_64;
  uint local_60;
  undefined4 local_5c;
  undefined1 auStack_58 [16];
  uint uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  char acStack_3c [16];
  uint uStack_2c;
  undefined4 uStack_28;
  void *pvStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b504b9;
  pvStack_14 = ExceptionList;
  local_5c = 0xf;
  local_60 = 0;
  local_70[0] = 0;
  ExceptionList = &pvStack_14;
  FUN_00409350("levels",6);
  local_c = 0;
  piVar3 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 0x9c))(local_70);
  puStack_10 = (undefined1 *)0xffffffff;
  if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_74);
  }
  local_60 = 0xf;
  iVar9 = 0;
  uStack_64 = 0;
  uStack_74 = uStack_74 & 0xffffff00;
  (**(code **)(*piVar3 + 0xc0))();
  if (*(int *)(*(int *)(in_ECX + 0x30) + 0x164) == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = **(int **)(*(int *)(in_ECX + 0x30) + 0x15c);
  }
  iVar4 = 0;
  piVar7 = (int *)(iVar10 + 0x98);
  do {
    if (*piVar7 == *(int *)(in_ECX + 0x2c)) {
      iVar10 = *(int *)(iVar10 + 0x9c + iVar4 * 0x1c);
      goto LAB_0073c5b3;
    }
    iVar4 = iVar4 + 1;
    piVar7 = piVar7 + 7;
  } while (iVar4 < 4);
  iVar10 = 0;
LAB_0073c5b3:
  *(int *)(in_ECX + 0x38) = iVar10;
  if (iVar10 < 4) {
    iVar4 = iVar10;
    if (iVar10 < 0) {
      iVar4 = 0;
    }
  }
  else {
    iVar4 = 4;
  }
  if (0 < iVar4) {
    do {
      uStack_78 = FUN_00aae9af(0x88);
      puStack_10 = (undefined1 *)0x1;
      if (uStack_78 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_0073b7d0(uStack_78,iVar9,0,in_ECX,*(undefined4 *)(in_ECX + 0x30));
      }
      puStack_10 = (undefined1 *)0xffffffff;
      (**(code **)(*piVar3 + 0xb4))(uVar5,1);
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar4);
  }
  if (iVar10 < iVar4) goto LAB_0073c701;
  if (*(int *)(*(int *)(in_ECX + 0x30) + 0x164) == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = **(int **)(*(int *)(in_ECX + 0x30) + 0x15c);
  }
  if ((*(int *)(DAT_012588e8 + 0xb60) == *(int *)(in_ECX + 0x2c)) && (*(int *)(iVar9 + 0x80) != 3))
  {
    uStack_78 = FUN_00aae9af(0x88);
    puStack_10 = (undefined1 *)0x2;
    if (uStack_78 == 0) {
LAB_0073c6e2:
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_0073b7d0(uStack_78,iVar4,1,in_ECX,*(undefined4 *)(in_ECX + 0x30));
    }
  }
  else {
    if (iVar10 < 4) goto LAB_0073c701;
    uStack_78 = FUN_00aae9af(0x88);
    puStack_10 = (undefined1 *)0x3;
    if (uStack_78 == 0) goto LAB_0073c6e2;
    uVar5 = FUN_0073b7d0(uStack_78,iVar4,0,in_ECX,*(undefined4 *)(in_ECX + 0x30));
  }
  puStack_10 = (undefined1 *)0xffffffff;
  (**(code **)(*piVar3 + 0xb4))(uVar5,1);
LAB_0073c701:
  if (iVar10 < 5) {
    uStack_28 = 0xf;
    uStack_2c = 0;
    acStack_3c[0] = '\0';
    FUN_00409350("progress_counter",0x10);
    puStack_10 = (undefined1 *)0x7;
    piVar3 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 0x3c))(acStack_3c);
    (**(code **)(*piVar3 + 0x38))();
    *(undefined1 *)(piVar3 + 0x40) = 1;
    uVar2 = uStack_2c;
  }
  else {
    uStack_44 = 0xf;
    uStack_48 = 0;
    auStack_58[0] = 0;
    FUN_00409350("progress_counter",0x10);
    local_60 = 0xf;
    uStack_64 = 0;
    uStack_74 = uStack_74 & 0xffffff00;
    puStack_10._0_1_ = 5;
    puStack_10._1_3_ = 0;
    pcVar6 = __itoa(iVar10 + -4,acStack_3c,10);
    pcVar8 = pcVar6;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(pcVar6,(int)pcVar8 - (int)(pcVar6 + 1));
    puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,6);
    (**(code **)(**(int **)(in_ECX + 0x20) + 0x3c))(auStack_58);
    FUN_00408ed0(&uStack_78,0,0xffffffff);
    FUN_00a5ecc0(&uStack_78,0);
    if (0xf < uStack_64) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_78);
    }
    uStack_64 = 0xf;
    uStack_68 = 0;
    uStack_78 = uStack_78 & 0xffffff00;
    uStack_40 = local_5c;
    uVar2 = uStack_48;
  }
  if (0xf < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_40);
  }
  uVar5 = FUN_0073b6f0(in_ECX);
  *(undefined4 *)(in_ECX + 0x38) = uVar5;
  ExceptionList = pvStack_1c;
  return;
}

