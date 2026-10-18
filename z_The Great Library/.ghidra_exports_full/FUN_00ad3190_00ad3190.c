// FUN_00ad3190 @ 00ad3190 body=[[00ad3190, 00ad3246]]


void FUN_00ad3190(uint param_1)

{
  undefined4 *puVar1;
  int *in_ECX;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint local_4;
  
  uVar5 = in_ECX[1];
  if (param_1 != uVar5) {
    if (uVar5 < param_1) {
      in_ECX[1] = param_1;
      if ((uint)in_ECX[2] < param_1) {
        FUN_00b0d550(param_1);
      }
      if (uVar5 < param_1) {
        iVar2 = uVar5 << 4;
        iVar3 = param_1 - uVar5;
        do {
          puVar1 = (undefined4 *)(*in_ECX + iVar2);
          if (puVar1 != (undefined4 *)0x0) {
            *puVar1 = 0;
            puVar1[1] = 0;
            puVar1[2] = 0;
            *(undefined2 *)(puVar1 + 3) = 1;
          }
          iVar2 = iVar2 + 0x10;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        return;
      }
    }
    else {
      local_4 = param_1;
      if (param_1 < uVar5) {
        iVar2 = param_1 << 4;
        do {
          piVar4 = (int *)(*in_ECX + iVar2);
          uVar5 = 0;
          if (piVar4[1] != 0) {
            do {
              (*(code *)**(undefined4 **)(*piVar4 + uVar5 * 8))(0);
              uVar5 = uVar5 + 1;
            } while (uVar5 < (uint)piVar4[1]);
          }
          if (*piVar4 != 0) {
            (*(code *)PTR__free_00f01b10)(*piVar4);
          }
          local_4 = local_4 + 1;
          iVar2 = iVar2 + 0x10;
        } while (local_4 < (uint)in_ECX[1]);
      }
      in_ECX[1] = param_1;
    }
  }
  return;
}

