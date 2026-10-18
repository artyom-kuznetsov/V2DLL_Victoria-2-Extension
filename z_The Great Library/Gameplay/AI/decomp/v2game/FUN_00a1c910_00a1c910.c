// FUN_00a1c910 @ 00a1c910 body=[[00a1c910, 00a1c99f]]


int FUN_00a1c910(int param_1)

{
  char *pcVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *unaff_ESI;
  undefined2 *puVar5;
  
  if ((*unaff_ESI != 0) || (unaff_ESI[1] != -1)) {
    return 0x1000000;
  }
  GetCurrentDirectoryA(0x104,(LPSTR)(unaff_ESI + 0x50));
  piVar2 = unaff_ESI + 0x50;
  do {
    piVar3 = piVar2;
    piVar2 = (int *)((int)piVar3 + 1);
  } while ((char)*piVar3 != '\0');
  if ((*(LPSTR)((int)piVar3 + -1) != '\\') && (*(LPSTR)((int)piVar3 + -1) != '/')) {
    puVar5 = (undefined2 *)((int)unaff_ESI + 0x13f);
    do {
      pcVar1 = (char *)((int)puVar5 + 1);
      puVar5 = (undefined2 *)((int)puVar5 + 1);
    } while (*pcVar1 != '\0');
    *puVar5 = 0x5c;
  }
  iVar4 = FUN_00a1b940(&param_1);
  if (iVar4 == 0) {
    return param_1;
  }
  iVar4 = FUN_00a1bd60();
  *unaff_ESI = iVar4;
  return (-(uint)(iVar4 != 0) & 0xfffffe00) + 0x200;
}

