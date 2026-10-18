// FUN_0099f370 @ 0099f370 body=[[0099f370, 0099f41c]]


void FUN_0099f370(undefined4 param_1,undefined4 param_2)

{
  int unaff_ESI;
  undefined4 *unaff_EDI;
  char local_108 [260];
  
  if ((*(char *)(unaff_ESI + 0xc) == '\0') && (*(int *)(unaff_ESI + 4) != 0)) {
    FUN_009a08a0(unaff_ESI,*(int *)(unaff_ESI + 4) + -1);
  }
  if (0xf < (uint)unaff_EDI[5]) {
    unaff_EDI = (undefined4 *)*unaff_EDI;
  }
  __snprintf(local_108,0xff,"%s",unaff_EDI);
  FUN_0099ff90(unaff_ESI);
  FUN_004013e0(unaff_ESI);
  _sprintf(local_108,"%lld",param_1,param_2);
  FUN_0099ff90(unaff_ESI);
  FUN_004013e0(unaff_ESI);
  return;
}

