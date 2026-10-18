// FUN_00933fd0 @ 00933fd0 body=[[00933fd0, 0093409d]]


void FUN_00933fd0(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int in_ECX;
  int local_8;
  
  if (*(char *)(DAT_012588e8 + 0xd10) != '\0') {
    piVar1 = *(int **)(in_ECX + 0x58);
    while (piVar1 != (int *)0x0) {
      piVar2 = (int *)*piVar1;
      piVar1 = (int *)piVar1[2];
      iVar4 = (**(code **)(*piVar2 + 0x18))();
      if (iVar4 == 0x34a) {
        iVar4 = piVar2[4];
        piVar2 = *(int **)(in_ECX + 0xf0);
        local_8 = iVar4;
        if (&local_8 < piVar2) {
          piVar3 = *(int **)(in_ECX + 0xec);
          if (&local_8 < piVar3) goto LAB_00934069;
          if (piVar2 == *(int **)(in_ECX + 0xf4)) {
            FUN_00a513f0();
          }
          if (*(undefined4 **)(in_ECX + 0xf0) != (undefined4 *)0x0) {
            **(undefined4 **)(in_ECX + 0xf0) =
                 *(undefined4 *)(*(int *)(in_ECX + 0xec) + ((int)&local_8 - (int)piVar3 >> 2) * 4);
          }
        }
        else {
LAB_00934069:
          if (piVar2 == *(int **)(in_ECX + 0xf4)) {
            FUN_00a513f0();
          }
          if (*(int **)(in_ECX + 0xf0) != (int *)0x0) {
            **(int **)(in_ECX + 0xf0) = iVar4;
          }
        }
        *(int *)(in_ECX + 0xf0) = *(int *)(in_ECX + 0xf0) + 4;
      }
    }
  }
  return;
}

