// FUN_00b14f20 @ 00b14f20 body=[[00b14f20, 00b14f9d]]


undefined4 FUN_00b14f20(void)

{
  char cVar1;
  int iVar2;
  undefined4 *in_ECX;
  
  if ((char *)*in_ECX == (char *)0x0) {
    return 0;
  }
  if ((in_ECX[1] == 1) && (iVar2 = __stricmp((char *)*in_ECX,"1"), iVar2 == 0)) {
    return 1;
  }
  cVar1 = FUN_00b147b0(&DAT_00df8144);
  if ((((cVar1 == '\0') && (cVar1 = FUN_00b147b0("false"), cVar1 == '\0')) &&
      (cVar1 = FUN_00b147b0(&DAT_00df87f0), cVar1 == '\0')) &&
     ((cVar1 = FUN_00b147b0(&DAT_00dfbbd0), cVar1 == '\0' &&
      (cVar1 = FUN_00b147b0(&DAT_00dfbbd4), cVar1 == '\0')))) {
    return 0;
  }
  return 1;
}

