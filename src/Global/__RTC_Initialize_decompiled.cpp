
/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

void __RTC_Initialize(void)

{
  code **local_20;
  
  for (local_20 = (code **)&DAT_00474ab8; local_20 < &DAT_00474ab8; local_20 = local_20 + 1) {
    if (*local_20 != (code *)0x0) {
      (**local_20)();
    }
  }
  return;
}

