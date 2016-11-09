// Generated by Apple Swift version 3.0.1 (swiftlang-800.0.58.6 clang-800.0.42.1)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if defined(__has_attribute) && __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if defined(__has_feature) && __has_feature(modules)
@import ObjectiveC;
@import Foundation;
@import UIKit;
@import CoreGraphics;
@import WebKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"

SWIFT_CLASS("_TtC6Lioniq10LIQManager")
@interface LIQManager : NSObject
/**
  Public getters
*/
@property (nonatomic, readonly, copy) NSString * _Nullable appKey;
@property (nonatomic, readonly, copy) NSString * _Nullable appSecret;
@property (nonatomic, readonly, copy) NSString * _Nullable appUserId;
/**
  Set shop app with APP_KEY and APP_SECRET
  You can get key/secret from dashboard at https://lioniq.com/
  <ul>
    <li>
      Parameters:
    </li>
    <li>
      appKey: String
    </li>
    <li>
      appSecret: String
    </li>
  </ul>
*/
- (void)setAppKeyWithAppKey:(NSString * _Nonnull)appKey appSecret:(NSString * _Nonnull)appSecret;
- (void)setAppUserIdWithAppUserId:(NSString * _Nonnull)appUserId;
- (void)setShopDataWithShopDataURL:(NSURL * _Nonnull)shopDataURL;
/**
  A shared instance of LIQManager
*/
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) LIQManager * _Nonnull defaultManager;)
+ (LIQManager * _Nonnull)defaultManager;
/**
  Instantiate LIQManager with APP_KEY and APP_SECRET.
  Don’t instantiate directly, but prefer to use defaultManager.
  You can get key/secret from dashboard at https://lioniq.com/
  \param appKey String

  \param appSecret String

*/
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
- (nonnull instancetype)initWithAppKey:(NSString * _Nonnull)appKey appSecret:(NSString * _Nonnull)appSecret OBJC_DESIGNATED_INITIALIZER;
/**
  Get template updates from API server
*/
- (void)getUpdates;
@end

@class NSError;

SWIFT_CLASS("_TtC6Lioniq16LIQSearchManager")
@interface LIQSearchManager : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
/**
  Get Autocomplete phrases from API for search query.
  Parameters:
  <ul>
    <li>
      query: \code
      String
      \endcode, search query string
    </li>
    <li>
      successBlock: \code
      (results: [String]) -> Void
      \endcode, success block returning suggestions as String array.
    </li>
    <li>
      errorBlock: \code
      (error: NSError) -> Void
      \endcode, error block
    </li>
  </ul>
*/
- (void)getAutocompleteForQuery:(NSString * _Nonnull)query successBlock:(void (^ _Nonnull)(NSArray<NSString *> * _Nonnull))successBlock errorBlock:(void (^ _Nonnull)(NSError * _Nonnull))errorBlock;
@end

@class NSCoder;

SWIFT_CLASS("_TtC6Lioniq25LIQSearchResultHeaderView")
@interface LIQSearchResultHeaderView : UIView
- (void)awakeFromNib;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC6Lioniq23LIQSearchResultViewCell")
@interface LIQSearchResultViewCell : UITableViewCell
- (void)awakeFromNib;
- (void)setSelected:(BOOL)selected animated:(BOOL)animated;
- (nonnull instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString * _Nullable)reuseIdentifier OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@protocol LIQSearchResultsViewControllerDelegate;
@class NSBundle;

SWIFT_CLASS("_TtC6Lioniq30LIQSearchResultsViewController")
@interface LIQSearchResultsViewController : UIViewController
@property (nonatomic, strong) id <LIQSearchResultsViewControllerDelegate> _Nullable delegate;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (void)viewDidAppear:(BOOL)animated;
- (void)setupTableview;
- (void)setupTableviewHeaderView;
- (void)popAction;
/**
  Search for items with query string input.
  Calls LIQSearch for results, and updates in completion handler
*/
- (void)didSearchWithQuery:(NSString * _Nonnull)query;
/**
  Clear search query, resets search items and tableview
*/
- (void)didClear;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UITableView;

@interface LIQSearchResultsViewController (SWIFT_EXTENSION(Lioniq)) <UITableViewDelegate, UIScrollViewDelegate>
- (void)tableView:(UITableView * _Nonnull)tableView didSelectRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
@end

@class UISearchBar;

@interface LIQSearchResultsViewController (SWIFT_EXTENSION(Lioniq)) <UISearchBarDelegate, UIBarPositioningDelegate>
- (BOOL)searchBarShouldBeginEditing:(UISearchBar * _Nonnull)searchBar;
- (void)searchBar:(UISearchBar * _Nonnull)searchBar textDidChange:(NSString * _Nonnull)searchText;
@end


@interface LIQSearchResultsViewController (SWIFT_EXTENSION(Lioniq)) <UITableViewDataSource>
- (NSInteger)numberOfSectionsInTableView:(UITableView * _Nonnull)tableView;
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
@end


SWIFT_PROTOCOL("_TtP6Lioniq38LIQSearchResultsViewControllerDelegate_")
@protocol LIQSearchResultsViewControllerDelegate
@optional
/**
  Tapped cell with search results for item with key
*/
- (void)didTapSearchResultVCWithItemKey:(NSString * _Nonnull)itemKey;
/**
  Dismissed search controller
*/
- (void)didDismiss;
@end

@protocol LIQSearchViewControllerDelegate;

SWIFT_CLASS("_TtC6Lioniq23LIQSearchViewController")
@interface LIQSearchViewController : UIViewController
@property (nonatomic, strong) id <LIQSearchViewControllerDelegate> _Nullable delegate;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (void)setupTableview;
- (void)setupTableviewHeaderView;
/**
  Search for items with query string input.
  Calls LIQSearch for results, and updates in completion handler
*/
- (void)didSearchWithQuery:(NSString * _Nonnull)query;
/**
  Clear search query, resets search items and tableview
*/
- (void)didClear;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


@interface LIQSearchViewController (SWIFT_EXTENSION(Lioniq)) <LIQSearchResultsViewControllerDelegate>
- (void)didTapSearchResultVCWithItemKey:(NSString * _Nonnull)itemKey;
@end


@interface LIQSearchViewController (SWIFT_EXTENSION(Lioniq)) <UITableViewDelegate, UIScrollViewDelegate>
- (void)tableView:(UITableView * _Nonnull)tableView didSelectRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
@end


@interface LIQSearchViewController (SWIFT_EXTENSION(Lioniq)) <UITableViewDataSource>
- (NSInteger)numberOfSectionsInTableView:(UITableView * _Nonnull)tableView;
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
@end


@interface LIQSearchViewController (SWIFT_EXTENSION(Lioniq)) <UISearchBarDelegate, UIBarPositioningDelegate>
- (void)searchBarCancelButtonClicked:(UISearchBar * _Nonnull)searchBar;
- (BOOL)searchBarShouldBeginEditing:(UISearchBar * _Nonnull)searchBar;
- (void)searchBarSearchButtonClicked:(UISearchBar * _Nonnull)searchBar;
- (void)searchBar:(UISearchBar * _Nonnull)searchBar textDidChange:(NSString * _Nonnull)searchText;
@end


SWIFT_PROTOCOL("_TtP6Lioniq31LIQSearchViewControllerDelegate_")
@protocol LIQSearchViewControllerDelegate
@optional
/**
  Tapped cell with search results for item with key
*/
- (void)didTapSearchResultWithItemKey:(NSString * _Nonnull)itemKey;
/**
  Dismissed search controller
*/
- (void)didDismiss;
@end


SWIFT_CLASS("_TtC6Lioniq23LIQSearchViewHeaderView")
@interface LIQSearchViewHeaderView : UIView
- (void)awakeFromNib;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@protocol LIQViewDelegate;
@class WKWebViewConfiguration;

SWIFT_CLASS("_TtC6Lioniq7LIQView")
@interface LIQView : WKWebView
@property (nonatomic, strong) id <LIQViewDelegate> _Nullable delegate;
- (nonnull instancetype)initWithFrame:(CGRect)frame configuration:(WKWebViewConfiguration * _Nonnull)configuration SWIFT_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
- (void)reloadShop;
- (void)reloadCart;
- (void)reloadSearch;
/**
  \code
     Refresh shop user for userId from LIQManager.defaultManager. 
     If userId is null, will logout user.

  \endcode*/
- (void)refreshShopUser;
/**
  Navigate to item with key
*/
- (void)navigateToItemWithKey:(NSString * _Nonnull)key;
@end

@class WKUserContentController;
@class WKScriptMessage;

@interface LIQView (SWIFT_EXTENSION(Lioniq)) <WKScriptMessageHandler>
- (void)userContentController:(WKUserContentController * _Nonnull)userContentController didReceiveScriptMessage:(WKScriptMessage * _Nonnull)message;
@end


@interface LIQView (SWIFT_EXTENSION(Lioniq)) <LIQSearchViewControllerDelegate>
- (void)didTapSearchResultWithItemKey:(NSString * _Nonnull)itemKey;
@end

@class UIScrollView;

@interface LIQView (SWIFT_EXTENSION(Lioniq)) <UIScrollViewDelegate>
- (UIView * _Nullable)viewForZoomingInScrollView:(UIScrollView * _Nonnull)scrollView;
@end


SWIFT_PROTOCOL("_TtP6Lioniq15LIQViewDelegate_")
@protocol LIQViewDelegate
@optional
/**
  Webview routed to Main view; this is Shop or Cart view
*/
- (void)webviewDidMain;
/**
  Webview routed to Item Detail view
*/
- (void)webviewDidItemDetail;
/**
  Webview loaded Item from API callback event.
  Parameters:
  - itemData: item data json, with following keys:
  - key: String, json object identifier
  - title: String
  - desc: String
  - price: int, e.g. 100 = ¥1.00
  - thumb_image_url: String, thumbnail image url
  - large_cover_photo_url: String, large fullsize image
  - item_footer: String
  - photos: Array of \code
  photo
  \endcode json objects
  - detail_photos: Array of \code
  detail_photo
  \endcode json objects
  - sizes: Array of \code
  size
  \endcode json objects
  - colors: Array of \code
  colors
  \endcode json objects
*/
- (void)webviewDidLoadItem:(NSDictionary<NSString *, id> * _Nonnull)itemData;
/**
  Added Item to cart callback event
  Parameters:
  - cartItem: cart_item data json:
  - qty: int, quantity of item in shopping cart
  - color: String, color of item added to cart
  - size: String, size of item added to cart
  - item: Dictionary of \code
  item
  \endcode json object
*/
- (void)webviewDidAddToCart:(NSDictionary<NSString *, id> * _Nonnull)cartItemData;
/**
  Webview did route to checkout callback event
*/
- (void)webviewDidCheckout;
/**
  Webview did place order callback event
  Parameters:
  - orderData: order data json:
  - key: String, json object identifier
  - cart_items: Array of \code
  cart_item
  \endcode json objects
  - address: String
  - subtotal_amount: int, subtotal of items amount in cart, e.g. 100 = ¥1.00
  - shipping_amount: int, shipping fee amount
  - total_amount: int, total order payable amount
  - fapiao: String, user requested fapiao bill title
*/
- (void)webviewDidOrder:(NSDictionary<NSString *, id> * _Nonnull)orderData;
/**
  Webview did cancel event. Used for cancel button from Search view.
*/
- (void)webviewDidCancel;
@end

#pragma clang diagnostic pop
