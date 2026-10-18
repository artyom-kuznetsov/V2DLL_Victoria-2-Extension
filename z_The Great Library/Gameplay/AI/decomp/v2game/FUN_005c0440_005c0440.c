// FUN_005c0440 @ 005c0440 body=[[005c0440, 005c04e1]]


undefined4 FUN_005c0440(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *unaff_ESI;
  undefined1 local_8 [4];
  
  iVar3 = unaff_ESI[0xf];
  piVar2 = (int *)(**(code **)(*unaff_ESI + 0x30))(local_8,0);
  if (((((iVar3 < *piVar2) &&
        (piVar2 = (int *)(**(code **)(*unaff_ESI + 0x30))(local_8,0), 0 < *piVar2)) &&
       (unaff_ESI[0x1d] != 0)) &&
      ((cVar1 = (**(code **)(*(int *)unaff_ESI[0x1d] + 0x38))(), cVar1 == '\0' ||
       (*(int *)(unaff_ESI[0x1d] + 0x74) == 0)))) && ((char)((int *)unaff_ESI[0x1d])[0x41] == '\0'))
  {
    cVar1 = (**(code **)(*(int *)unaff_ESI[0x1d] + 0x38))();
    if ((cVar1 != '\0') &&
       (iVar3 = (**(code **)(*(int *)unaff_ESI[0x1d] + 0x2c))(), *(int *)(iVar3 + 0x1b4) != 0)) {
      return 0;
    }
    cVar1 = (**(code **)(*unaff_ESI + 0x28))();
    if ((cVar1 == '\0') ||
       (*(char *)(*(int *)(*(int *)(unaff_ESI[0x1d] + 0xdc) + 0x5c) + 0x2a) != '\0')) {
      return 1;
    }
  }
  return 0;
}

