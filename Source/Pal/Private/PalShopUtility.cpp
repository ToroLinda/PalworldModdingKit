#include "PalShopUtility.h"

UPalShopUtility::UPalShopUtility() {
}

void UPalShopUtility::LotteryItemShop(const UObject* WorldContextObject, const FName& ItemShopLotteryName, FName& OutShopName) {
}

bool UPalShopUtility::IsSkinShop(const UObject* WorldContextObject, const FName& ShopName) {
    return false;
}

bool UPalShopUtility::GetPalShopCreateData(const UObject* WorldContextObject, const FName& ShopName, FPalPalShopCreateDataRow& OutData) {
    return false;
}

bool UPalShopUtility::GetItemShopCreateData(const UObject* WorldContextObject, const FName& ShopName, FPalItemShopCreateDataRow& OutData) {
    return false;
}

bool UPalShopUtility::CanSellFromStaticItemIDAndNum(const UObject* WorldContextObject, const FPalStaticItemIdAndNum& StaticItemIDAndNum, float SellRate) {
    return false;
}

bool UPalShopUtility::CanSellFromSlotIdAndNum(const UObject* WorldContextObject, const FPalItemSlotIdAndNum& SlotIdAndNum, float SellRate) {
    return false;
}

float UPalShopUtility::CalcPalSellPriceBuffRate(const UObject* WorldContextObject, const APalPlayerCharacter* OwnerCharacter, FName MoneyItemData) {
    return 0.0f;
}

int32 UPalShopUtility::CalcPalSellPrice(const UObject* WorldContextObject, const FPalIndividualCharacterSaveParameter& SaveParameter, float SellRate) {
    return 0;
}

float UPalShopUtility::CalcPalBuyPriceBuffRate(const UObject* WorldContextObject, const APalPlayerCharacter* OwnerCharacter, FName MoneyItemData) {
    return 0.0f;
}

float UPalShopUtility::CalcItemSellPriceBuffRate(const UObject* WorldContextObject, const APalPlayerCharacter* OwnerCharacter, FName MoneyItemData) {
    return 0.0f;
}

int32 UPalShopUtility::CalcItemSellPrice(const UObject* WorldContextObject, const FPalStaticItemIdAndNum& StaticItemIDAndNum, float SellRate) {
    return 0;
}

float UPalShopUtility::CalcItemBuyPriceBuffRate(const UObject* WorldContextObject, const APalPlayerCharacter* OwnerCharacter, FName MoneyItemData) {
    return 0.0f;
}


