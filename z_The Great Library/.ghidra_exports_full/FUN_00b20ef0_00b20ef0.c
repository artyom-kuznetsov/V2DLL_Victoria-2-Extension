// FUN_00b20ef0 @ 00b20ef0 body=[[00b20ef0, 00b20fb3]]


void * FUN_00b20ef0(void)

{
  char cVar1;
  undefined *puVar2;
  void *pvVar3;
  char *pcVar4;
  char *pcVar5;
  char *unaff_EBX;
  size_t _Size;
  
  pvVar3 = (void *)FUN_00b29450();
  puVar2 = PTR_DAT_00f05ea4;
  if (pvVar3 != (void *)0x0) {
    return pvVar3;
  }
  if (unaff_EBX == (char *)0x0) {
    FUN_00b1f840("argv0 is NULL");
    return (void *)0x0;
  }
  pcVar4 = PTR_DAT_00f05ea4;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  if ((int)pcVar4 - (int)(PTR_DAT_00f05ea4 + 1) == 1) {
    pcVar5 = _strrchr(unaff_EBX,(int)(char)*PTR_DAT_00f05ea4);
  }
  else {
    pcVar4 = (char *)FUN_00aafe90();
    if (pcVar4 == (char *)0x0) goto LAB_00b20fa2;
    do {
      pcVar5 = pcVar4;
      pcVar4 = (char *)FUN_00aafe90(pcVar5 + 1,puVar2);
    } while (pcVar4 != (char *)0x0);
  }
  if (pcVar5 != (char *)0x0) {
    _Size = (int)pcVar5 - (int)unaff_EBX;
    pvVar3 = (void *)(*DAT_013f3aa8)(_Size + 1,0);
    if (pvVar3 != (void *)0x0) {
      FID_conflict__memcpy(pvVar3,unaff_EBX,_Size);
      *(undefined1 *)(_Size + (int)pvVar3) = 0;
      return pvVar3;
    }
    FUN_00b1f840("Out of memory");
    return (void *)0x0;
  }
LAB_00b20fa2:
  FUN_00b1f840("Invalid argument");
  return (void *)0x0;
}

