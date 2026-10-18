// FUN_00adf420 @ 00adf420 body=[[00adf420, 00adf518] [00adf520, 00adf614]]


int * FUN_00adf420(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int in_ECX;
  uint uVar6;
  uint uVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00b378c3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar6 = 0;
  iVar3 = (*(code *)PTR_FUN_00f01b08)
                    (0x40,0xca,4,0,0,0xffffffff,DAT_00ef259c ^ (uint)&stack0xffffffe0);
  uStack_4 = 0;
  if (iVar3 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_00adeb60(*(undefined4 *)(in_ECX + 0x18),*(uint *)(in_ECX + 0x1c) / 3,
                                 *(undefined4 *)(in_ECX + 0x14));
  }
  uStack_4 = 0xffffffff;
  FID_conflict__memcpy((void *)piVar4[4],*(void **)(in_ECX + 0x10),*(int *)(in_ECX + 0x1c) * 4);
  uVar1 = *(uint *)(in_ECX + 4);
  uVar7 = piVar4[1];
  if (((uVar1 != uVar7) && (piVar4[1] = uVar1, uVar7 < uVar1)) && ((uint)piVar4[2] < uVar1)) {
    FUN_00aeb6c0(uVar1);
  }
  if (uVar1 != 0) {
    do {
      iVar2 = *piVar4;
      iVar3 = uVar6 * 4;
      uVar5 = FUN_00b075f0(piVar4);
      uVar6 = uVar6 + 1;
      *(undefined4 *)(iVar2 + iVar3) = uVar5;
    } while (uVar6 < uVar1);
  }
  uVar7 = 0;
  uVar6 = *(uint *)(in_ECX + 0x24);
  uVar1 = piVar4[9];
  if (((uVar6 != uVar1) && (piVar4[9] = uVar6, uVar1 < uVar6)) && ((uint)piVar4[10] < uVar6)) {
    FUN_00aeb6c0(uVar6);
  }
  if (uVar6 != 0) {
    do {
      iVar2 = piVar4[8];
      iVar3 = uVar7 * 4;
      uVar5 = (**(code **)(**(int **)(iVar3 + *(int *)(in_ECX + 0x20)) + 0xc))
                        (param_1,param_2,piVar4);
      uVar7 = uVar7 + 1;
      *(undefined4 *)(iVar2 + iVar3) = uVar5;
    } while (uVar7 < uVar6);
  }
  uVar7 = 0;
  uVar6 = *(uint *)(in_ECX + 0x34);
  uVar1 = piVar4[0xd];
  if (((uVar6 != uVar1) && (piVar4[0xd] = uVar6, uVar1 < uVar6)) && ((uint)piVar4[0xe] < uVar6)) {
    if (uVar6 == 0) {
      piVar4[0xd] = 0;
      piVar4[0xe] = 0;
      if (piVar4[0xc] != 0) {
        (*(code *)PTR__free_00f01b10)(piVar4[0xc]);
        piVar4[0xc] = 0;
      }
    }
    else {
      if (piVar4[0xc] == 0) {
        iVar3 = (*(code *)PTR_FUN_00f01b08)(uVar6 * 4,(short)piVar4[0xf],4,2,0,0xffffffff);
      }
      else {
        iVar3 = (*(code *)PTR_FUN_00f01b0c)(piVar4[0xc],uVar6 * 4);
      }
      piVar4[0xc] = iVar3;
      piVar4[0xe] = uVar6;
    }
  }
  if (uVar6 != 0) {
    do {
      iVar2 = piVar4[0xc];
      iVar3 = uVar7 * 4;
      uVar5 = (**(code **)(**(int **)(iVar3 + *(int *)(in_ECX + 0x30)) + 0xc))
                        (param_1,param_2,piVar4);
      uVar7 = uVar7 + 1;
      *(undefined4 *)(iVar2 + iVar3) = uVar5;
    } while (uVar7 < uVar6);
  }
  ExceptionList = local_c;
  return piVar4;
}

