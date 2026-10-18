// FUN_0048e260 @ 0048e260 body=[[0048e260, 0048e2c9] [0048e2d4, 0048e31d]]


void FUN_0048e260(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int in_EAX;
  int *piVar4;
  undefined4 *puVar5;
  int in_ECX;
  
  if (in_ECX != in_EAX) {
    for (piVar4 = *(int **)(in_ECX + 0x14); piVar4 != (int *)0x0; piVar4 = (int *)piVar4[2]) {
      piVar1 = (int *)*piVar4;
      if (*piVar1 == in_EAX) {
        piVar1[1] = piVar1[1] + param_1;
        if (0 < piVar1[1]) {
          return;
        }
        FUN_005f2ae0();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    if (0 < param_1) {
      piVar4 = (int *)FUN_00aae9af();
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        *piVar4 = in_EAX;
        piVar4[1] = param_1;
      }
      iVar2 = *(int *)(in_ECX + 0x18);
      puVar5 = (undefined4 *)FUN_00aae9af();
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        *puVar5 = piVar4;
        puVar5[1] = iVar2;
        puVar5[2] = 0;
        *(undefined1 *)(puVar5 + 3) = 0;
      }
      iVar3 = *(int *)(in_ECX + 0x1c);
      *(undefined4 **)(in_ECX + 0x18) = puVar5;
      *(int *)(in_ECX + 0x1c) = iVar3 + 1;
      if (iVar3 != 0) {
        *(undefined4 **)(iVar2 + 8) = puVar5;
        return;
      }
      *(undefined4 **)(in_ECX + 0x14) = puVar5;
    }
  }
  return;
}

