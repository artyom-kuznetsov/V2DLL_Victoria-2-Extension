// FUN_00440200 @ 00440200 body=[[00440200, 0044024a]]


void FUN_00440200(void)

{
  int in_EAX;
  int *piVar1;
  int unaff_ESI;
  int unaff_EDI;
  
  if ((*(int *)(unaff_ESI + 0xac) != unaff_EDI) || (in_EAX != *(int *)(unaff_ESI + 0xb0))) {
    *(int *)(unaff_ESI + 0xb0) = in_EAX;
    *(int *)(unaff_ESI + 0xac) = unaff_EDI;
    (**(code **)(**(int **)(unaff_ESI + 0x90) + 0xd4))();
    piVar1 = (int *)(**(code **)(**(int **)(unaff_ESI + 0x90) + 0xec))();
    (**(code **)(*piVar1 + 0x150))();
  }
  return;
}

