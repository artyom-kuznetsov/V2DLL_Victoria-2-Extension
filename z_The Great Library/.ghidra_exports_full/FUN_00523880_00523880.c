// FUN_00523880 @ 00523880 body=[[00523880, 005238c3]]


void FUN_00523880(void)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint *in_EAX;
  int *piVar5;
  int unaff_EDI;
  
  piVar2 = *(int **)(unaff_EDI + 0xe8c);
  *in_EAX = 0;
  in_EAX[1] = 0;
  for (piVar5 = piVar2; (piVar2 <= piVar5 && (piVar5 < *(int **)(unaff_EDI + 0xe90)));
      piVar5 = piVar5 + 1) {
    uVar3 = *(uint *)(*piVar5 + 0x18);
    iVar4 = *(int *)(*piVar5 + 0x1c);
    uVar1 = *in_EAX;
    *in_EAX = *in_EAX + uVar3;
    in_EAX[1] = in_EAX[1] + iVar4 + (uint)CARRY4(uVar1,uVar3);
  }
  return;
}

