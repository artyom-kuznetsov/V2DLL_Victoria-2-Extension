// FUN_00a6b450 @ 00a6b450 body=[[00a6b450, 00a6b478]]


uint FUN_00a6b450(void)

{
  if ((DAT_013f05bc - DAT_013f05b8 & 0xfffffffc) == 0) {
    return DAT_013f05bc & 0xffffff00;
  }
  if (DAT_013f05b8 != DAT_013f05bc) {
    DAT_013f05bc = DAT_013f05bc - 4;
  }
  return CONCAT31((int3)(DAT_013f05bc >> 8),1);
}

