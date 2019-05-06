<?hh // strict

namespace Zynga\Framework\PgData\V1\Test\ExampleFeature\Model\Inventory;

use Zynga\Framework\PgData\V1\PgRow;
use Zynga\Framework\Type\V1\UInt64Box;
use Zynga\Framework\Type\V1\StringBox;

class ItemType extends PgRow {
  public UInt64Box $id;
  public StringBox $name;

  public function __construct() {

    $this->id = new UInt64Box();
    $this->name = new StringBox();

    parent::__construct();

  }

  public function getTableName(): string {
    return 'item_type';
  }

  public function getPrimaryKey(): string {
    return 'id';
  }

}
