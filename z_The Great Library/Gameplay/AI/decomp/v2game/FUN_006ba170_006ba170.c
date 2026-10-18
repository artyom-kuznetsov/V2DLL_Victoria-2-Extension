// FUN_006ba170 @ 006ba170 body=[[006ba170, 006ba1c1] [006ba1c5, 006ba21b]]


void FUN_006ba170(void)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  
  FatalExit(0);
  if (*(int *)(in_ECX + 0x42c) != 0) {
    (**(code **)(*(int *)(*(int *)(in_ECX + 0x42c) + 0x1c) + 0x38))();
    FUN_0099bd50(*(undefined4 *)(in_ECX + 0xac));
    *(undefined4 *)(in_ECX + 0x42c) = 0;
  }
  iVar1 = *(int *)(in_ECX + 0x5c4);
  if (iVar1 == 0) {
    *(undefined4 *)(in_ECX + 0x5c4) = 0;
    if (*(char *)(in_ECX + 0xa30) != '\0') {
      DAT_013f0934 = DAT_013f0934 + -1;
    }
    for (piVar2 = *(int **)(in_ECX + 0xa20); (piVar2 != (int *)0x0 && (*piVar2 != in_ECX + 0xa50));
        piVar2 = (int *)piVar2[2]) {
    }
    FUN_005f2ae0(piVar2);
                    /* WARNING: Could not recover jumptable at 0x006ba21a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(*(int *)(in_ECX + 0x5d0) + 0x18) + 0x30))();
    return;
  }
  FUN_00613860(iVar1);
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(iVar1);
}

