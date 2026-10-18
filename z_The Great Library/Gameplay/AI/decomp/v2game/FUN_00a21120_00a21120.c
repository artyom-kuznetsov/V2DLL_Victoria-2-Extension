// FUN_00a21120 @ 00a21120 body=[[00a21120, 00a211e3]]


void FUN_00a21120(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int unaff_EDI;
  
  _memset((void *)(unaff_EDI + 0x2548),0,0xa0);
  _memset((void *)(unaff_EDI + 0x24a8),0,0xa0);
  piVar3 = (int *)(unaff_EDI + 0x25e8);
  iVar2 = 0x28;
  do {
    piVar1 = (int *)*piVar3;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    *piVar3 = 0;
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  _memset((void *)(unaff_EDI + 0x25e8),0,0xa0);
  piVar3 = *(int **)(unaff_EDI + 0x268c);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  piVar3 = *(int **)(unaff_EDI + 0x2690);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  piVar3 = *(int **)(unaff_EDI + 0x2694);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  *(undefined4 *)(unaff_EDI + 0x2694) = 0;
  *(undefined4 *)(unaff_EDI + 0x268c) = 0;
  *(undefined4 *)(unaff_EDI + 0x2690) = 0;
  *(undefined4 *)(unaff_EDI + 0x2698) = 0;
  *(undefined4 *)(unaff_EDI + 0x269c) = 0;
  *(undefined4 *)(unaff_EDI + 0x26a8) = 0;
  return;
}

