// FUN_00412580 @ 00412580 body=[[00412580, 00412639]]


void FUN_00412580(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int unaff_EDI;
  
  puVar4 = (undefined4 *)(*(int *)(unaff_EDI + 0x218) * 0x10 + *(int *)(param_1 + 0x350));
  for (piVar2 = (int *)*puVar4; (piVar2 != (int *)puVar4[1] && (*piVar2 != unaff_EDI));
      piVar2 = piVar2 + 1) {
  }
  FUN_0068f020();
  piVar1 = *(int **)(param_1 + 0x364);
  piVar2 = *(int **)(param_1 + 0x360);
  for (piVar3 = piVar2; (piVar3 != piVar1 && (*piVar3 != unaff_EDI)); piVar3 = piVar3 + 1) {
  }
  if ((piVar2 <= piVar3) && (piVar3 < piVar1)) {
    for (; (piVar2 != piVar1 && (*piVar2 != unaff_EDI)); piVar2 = piVar2 + 1) {
    }
    FUN_0068f020();
  }
  if (*(int *)(param_1 + 0x390) == unaff_EDI) {
    *(undefined4 *)(param_1 + 0x390) = 0;
  }
  FUN_00401830(unaff_EDI);
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

