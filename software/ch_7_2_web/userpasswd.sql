CREATE TABLE IF NOT EXISTS `userpasswd_tbl`(
   `uid` INT UNSIGNED AUTO_INCREMENT,
   `uname` VARCHAR(32) NOT NULL,
   `passwd` VARCHAR(128) NOT NULL,
   PRIMARY KEY ( `uid` )
)ENGINE=InnoDB DEFAULT CHARSET=utf8;

INSERT INTO `userpasswd_tbl` (`uname`, `passwd`) VALUES('admin', 'testpasswd');
                       