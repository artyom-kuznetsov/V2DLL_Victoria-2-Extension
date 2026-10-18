// FUN_009906a0 @ 009906a0 body=[[009906a0, 0099073c] [00990740, 0099087a]]


void FUN_009906a0(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  undefined1 local_8 [4];
  
  FUN_004138b0(&DAT_0131c8cc,local_8,DAT_0131c8cc,DAT_0131c8d0);
  FUN_0096fb80();
  pcVar4 = &DAT_01268ffc;
  do {
    pcVar3 = pcVar4;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(pcVar4,(int)pcVar3 - (int)(pcVar4 + 1));
    pcVar4 = pcVar4 + 0x104;
  } while ((int)pcVar4 < 0x13172dc);
  iVar5 = 0;
  if (0 < (int)(DAT_0131c8e0 - DAT_0131c8dc & 0xfffffffcU)) {
    do {
      iVar2 = *(int *)(DAT_0131c8dc + iVar5 * 4);
      pcVar4 = (char *)(iVar2 + 4);
      pcVar3 = pcVar4;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      FUN_00409350(pcVar4,(int)pcVar3 - (iVar2 + 5));
      iVar5 = iVar5 + 1;
    } while (iVar5 < DAT_0131c8e0 - DAT_0131c8dc >> 2);
  }
  FUN_00409350(&DAT_00e37c00,1);
  FUN_00409350(&DAT_00dfaf28,1);
  FUN_00409350(&DAT_00e37c04,1);
  FUN_00409350(&DAT_00dfe960,1);
  FUN_00409350(&DAT_00defdf4,1);
  FUN_00409350(&DAT_00defdfc,1);
  FUN_00409350(&DAT_00dfd404,1);
  FUN_00409350(&DAT_00defdf8,1);
  FUN_00409350(&DAT_00dee2cc,1);
  FUN_00409350(&DAT_00e37c08,1);
  FUN_00409350(&DAT_00ded950,1);
  return;
}

