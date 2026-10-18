// FUN_00936640 @ 00936640 body=[[00936640, 009366a8]]


void FUN_00936640(void)

{
  int *piVar1;
  int iVar2;
  int in_EAX;
  undefined4 *unaff_EDI;
  
  piVar1 = *(int **)(in_EAX + 0x58);
  do {
    if (piVar1 == (int *)0x0) {
      *unaff_EDI = DAT_01259abc;
      return;
    }
    iVar2 = *piVar1;
    piVar1 = (int *)piVar1[2];
  } while ((int)((double)((*(int *)(iVar2 + 8) + -43800000) / 0x18) / 365.0) < 2);
  *unaff_EDI = *(undefined4 *)(iVar2 + 8);
  return;
}

