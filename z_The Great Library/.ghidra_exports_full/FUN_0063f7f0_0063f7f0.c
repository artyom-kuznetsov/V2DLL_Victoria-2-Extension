// FUN_0063f7f0 @ 0063f7f0 body=[[0063f7f0, 0063f862]]


undefined4 FUN_0063f7f0(void)

{
  int iVar1;
  int *piVar2;
  int *unaff_ESI;
  int unaff_EDI;
  undefined1 local_24 [8];
  undefined1 local_1c [8];
  undefined1 local_14 [8];
  undefined1 local_c [8];
  
  iVar1 = (**(code **)(*unaff_ESI + 0x4c))(local_c);
  if (*(int *)(unaff_EDI + 0x328) < *(int *)(iVar1 + 4)) {
    iVar1 = (**(code **)(*unaff_ESI + 0x4c))(local_14);
    if (*(int *)(iVar1 + 4) < *(int *)(unaff_EDI + 0x330)) {
      piVar2 = (int *)(**(code **)(*unaff_ESI + 0x4c))(local_1c);
      if (*(int *)(unaff_EDI + 0x324) < *piVar2) {
        piVar2 = (int *)(**(code **)(*unaff_ESI + 0x4c))(local_24);
        if (*piVar2 < *(int *)(unaff_EDI + 0x32c)) {
          return 1;
        }
      }
    }
  }
  return 0;
}

