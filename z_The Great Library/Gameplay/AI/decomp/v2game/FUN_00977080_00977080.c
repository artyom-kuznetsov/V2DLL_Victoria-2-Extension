// FUN_00977080 @ 00977080 body=[[00977080, 009770f8]]


void FUN_00977080(void)

{
  char cVar1;
  char *pcVar2;
  int in_EAX;
  char *pcVar3;
  undefined1 *unaff_ESI;
  undefined *local_18 [4];
  undefined4 local_8;
  
  *(undefined4 *)(unaff_ESI + 0x14) = 0xf;
  *(undefined4 *)(unaff_ESI + 0x10) = 0;
  local_8 = 0;
  *unaff_ESI = 0;
  if (in_EAX == -1) {
    FUN_00409350(&DAT_00ded974,1);
    return;
  }
  local_18[0] = &DAT_00e369e0;
  local_18[1] = &DAT_00e369e4;
  local_18[2] = &DAT_00e369e8;
  local_18[3] = &DAT_00e369ec;
  pcVar2 = local_18[in_EAX];
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  return;
}

